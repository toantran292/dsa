#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

vector<int> D2T(int n){
    vector<int> res;
    while(n){
        res.push_back(n%3);
        n/=3;
    }
    return res;
}

void solve(){
    int a, c; cin >> a >> c;
    vector<int> sa = D2T(a), sc = D2T(c), res;

    while(sa.size() > sc.size()) sc.push_back(0);
    while(sc.size() > sa.size()) sa.push_back(0);

    int n = sa.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            if((j+sa[i])%3==sc[i]){
                res.push_back(j);
                break;
            }
        }
    }
    int ans = 0, p = 1;
    for(int i = 0; i < n; i++){
        ans += res[i]*p;
        p*=3;
    }
    cout << ans;
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

