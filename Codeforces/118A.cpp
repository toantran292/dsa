#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;


void solve(){
    string vowels = "aoeuiy";
    string s; cin >> s;
    vector<char>a;
    for(auto c: s){
        bool flag = true;
        for(auto cc: vowels){
            if(tolower(c) == cc) flag = false;
        }
        if(flag) a.push_back(tolower(c));
    }
    for(auto c: a){
        cout << "." << c;
    }
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


