#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int n;
ull k = 0;

ull countU(int x){
    ull res = 0;
    for(int i = 1; i <= min((int)sqrt(x), n); i++){
        if(x % i == 0 && x / i <= n){
            res += 2 - (i * i == x);
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> n;
    ull i = 0;
    do {
        i++;
        k += countU(i);
    } while (k < (ull)n * n / 2 + 1);

    cout << i;
    return 0;
}
