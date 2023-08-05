#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    string s1,s2; cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        char a = tolower(s1[i]), b = tolower(s2[i]);
        if(a > b) {
            cout << 1;
            return;
        }
        if(a < b){
            cout << -1;
            return;
        }
    }
    cout << 0;
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
