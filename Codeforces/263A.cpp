#include <bits/stdc++.h>
using namespace std;
const int inf = (int) 1.01e9;

void solve(){
    int t, x, y;
    for(int i = 0; i < 5; i++)
    for(int j = 0; j < 5; j++){
        cin >> t;
        if(t){
            x = i;
            y = j;
        }
    }
    cout << abs(x-2)+abs(y-2);
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
