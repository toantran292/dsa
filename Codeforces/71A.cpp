#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    string s; cin >> s;
    int n = s.length();
    if(n <= 10) cout << s;
    else cout << s[0] << n - 2 << s[n-1];
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
        freopen("test.in", "r", stdin);
    #endif // LOCAL
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

