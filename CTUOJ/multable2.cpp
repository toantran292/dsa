#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, x, res = 0; cin >> n >> x;

    for(int i = 1; i <= sqrt(x); i++){
        if(x % i == 0){
            if(i <= n && (x / i) <= n){
                if(i != (n / i)){
                    res += 2;
                } else {
                    res += 1;
                }
            }
        }
    }
    cout << res;
    return 0;
}

