#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    string s; cin >> s;
    vector<char> a;
    for(auto c: s)
        if(c != '+') a.push_back(c);
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size() - 1; i++){
        cout << a[i] << '+';
    }
    cout << a[a.size()-1];
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

