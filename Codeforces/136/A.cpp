#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        a[tmp-1] = i + 1;
    }
    for(auto e:a) cout << e << " ";
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

