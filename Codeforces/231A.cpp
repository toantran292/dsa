#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    int n, ans = 0; cin >> n;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        ans += (a+b+c > 1);
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
//    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
