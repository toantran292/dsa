#include <bits/stdc++.h>
using namespace std;

const int maxN = 10001;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> a(maxN, make_pair(0, 0));

    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        a[x].second = i;
        if(!a[x].first) a[x].first = i;
    }

    int res = 0;
    for(int i = 1; i < maxN; i++){
        if(a[i].first){
            for(int j = i; j < maxN; j++){
                if(a[j].first)
                    res = max(res, i*max({abs(a[i].first-a[j].first),
                                                    abs(a[i].first-a[j].second),
                                                    abs(a[i].second-a[j].first),
                                                    abs(a[i].second-a[j].second)}));
            }
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
