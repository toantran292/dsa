#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> pii(n);
    for(auto &x: pii){
        int s, f; cin >> s >> f;
        x = make_pair(f, s);
    }

    sort(pii.begin(), pii.end());

    int res = 1, temp = pii[0].first;

    for(int i = 1; i < n; i++){
        if(pii[i].second >= temp){
            res++;
            temp = pii[i].first;
        }
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
        freopen("text.in", "r", stdin);
    #endif // LOCAL
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
