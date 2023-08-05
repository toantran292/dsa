#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    int w; cin >> w;
    if(w == 2) cout << "NO";
    else cout << ((w&1) ? "NO" : "YES");
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
