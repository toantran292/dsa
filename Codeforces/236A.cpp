#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    string s; cin >> s;
    map<char, int> m;
    int res = 0;
    for(auto c: s){
        if(!m[c]){
            res++;
            m[c]++;
        }
    }
    if(res&1) cout << "IGNORE HIM!"; else cout <<"CHAT WITH HER!";
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

