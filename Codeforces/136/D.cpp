#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

vector<pair<int, int>> point;
vector<bool> c(8, false);

int64_t sqr(int64_t a){
    return a*a;
}

bool isOkk(vector<pair<int, int>> &P){
    int64_t a = sqr(P[0].first - P[1].first) + sqr(P[0].second - P[1].second);
    int64_t b = sqr(P[0].first - P[2].first) + sqr(P[0].second - P[2].second);
    int64_t c = sqr(P[3].first - P[1].first) + sqr(P[3].second - P[1].second);
    int64_t d = sqr(P[3].first - P[2].first) + sqr(P[3].second - P[2].second);
    //cout << a << " " << b << " " << c << " " << d << "\n";
    return (a==b) && (a==c) && (a==d) && (a*b != 0);
}
bool isOkkk(vector<pair<int, int>> &P){
    int64_t a = sqr(P[0].first - P[1].first) + sqr(P[0].second - P[1].second);
    int64_t b = sqr(P[0].first - P[2].first) + sqr(P[0].second - P[2].second);
    int64_t c = sqr(P[3].first - P[1].first) + sqr(P[3].second - P[1].second);
    int64_t d = sqr(P[3].first - P[2].first) + sqr(P[3].second - P[2].second);
    return (a==d) && (c==b) && (a*b != 0);
}

bool isOk(){
    vector<pair<int, int>> P, Q;
    for(int i = 0; i < 8; i++){
        if(c[i]){
            P.push_back(point[i]);
        } else {
            Q.push_back(point[i]);
        }
    }
    sort(P.begin(), P.end());
    sort(Q.begin(), Q.end());
    return (isOkk(P) && isOkkk(Q));
}

void solve(){
    for(int i = 0; i < 8; i++){
        int a, b;
        cin >> a >> b;
        point.push_back(make_pair(a, b));
    }

    for(int i = 0; i < 5; i++){
        c[i] = true;
        for(int j = i+1; j < 6; j++){
            c[j] = true;
            for(int k = j+1; k < 7; k++){
                c[k] = true;
                for(int t = k+1; t < 8 ; t++){
                    c[t] = true;
                    if(isOk()){
                        cout << "YES\n";
                        for(int aa = 0; aa < 8; aa++){
                            if(c[aa]) cout << aa+1 << " ";
                        }
                        cout << '\n';
                        for(int aa = 0; aa < 8; aa++){
                            if(!c[aa]) cout << aa+1 << " ";
                        }
                        return;
                    }

                    c[t] = false;
                }
                c[k] = false;
            }
            c[j] = false;
        }
        c[i] = false;
    }

    cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
        freopen("test.in", "r", stdin);
    #endif // LOCAL
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


