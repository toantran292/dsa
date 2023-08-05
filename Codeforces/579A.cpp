#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, res = 0; cin >> n;
    while(n){
        res += (n&1);
        n >>= 1;
    }
    cout << res;

    return 0;
}

