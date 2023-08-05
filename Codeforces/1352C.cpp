#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int test; cin >> test;
    while(test--){
        int64_t n, k; cin >> n >> k;
        int64_t i = ceil((double)k / (n - 1)), r = k % (n - 1);
        cout << i * n + r - max((long long)1, n * (r > 0)) << '\n';
    }
    return 0;
}
