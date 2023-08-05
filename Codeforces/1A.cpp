#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    long long n, m, a; cin >> n >> m >> a;
    long long q = (m / a)*(n / a);
    long long rn = n - (n / a)*a,  rm = m - (m / a)*a;

    cout << (long long)(q + (rn > 0)*ceil((double)m / a) + (rm > 0)*ceil((double)n / a) - (rn*rm > 0));}

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
