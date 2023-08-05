#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    int n, m, ans = 0;
    cin >> n >> m;
    list<pair<int, int>> q;
    vector<bool> v(10001, true);

    v[n] = false;
    q.push_back({n, 0});

    while(!q.empty()){

        pair<int, int> curr = q.front();
        q.pop_front();

        if(curr.first == m){
            cout << curr.second;
            return;
        }

        pair<int, int> mul = make_pair(curr.first*2, curr.second+1),
                       sub = make_pair(curr.first-1, curr.second+1);
        if(mul.first <= 10001 && v[mul.first]) {
            q.push_back(mul);
            v[mul.first] = false;
        }
        if(sub.first >= 0 && v[sub.first]) {
            q.push_back(sub);
            v[sub.first] = false;
        }

    }
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
