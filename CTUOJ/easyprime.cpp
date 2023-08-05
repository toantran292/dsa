#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;

vector<bool> primes(N + 1, true);

void SOE(){
    for(int p = 2; p * p <= N; p++)
        if(primes[p])
            for(int i = p * p; i <= N; i += p)
                primes[i] = false;
}

int f(int n){
    if(primes[n]) return 1;
    if(n % 2 == 0) return 2; // Goldbach’s conjecture
    if(primes[n-2]) return 2;
    return 3;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    SOE();
    vector<int> res(N + 1, 0);
    for(int i = 2; i <= N; i++){
        res[i] = res[i-1] + f(i);
    }

    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        cout << res[n] << '\n';
    }
    return 0;
}
