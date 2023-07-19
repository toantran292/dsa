#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

vvi mult(vvi &a, vvi &b){
    vvi c(a.size(), vi(b[0].size()));
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b[0].size(); j++){
            for(int k = 0; k < b.size(); k++)
                c[i][j] = ((ll)c[i][j] + ((ll)a[i][k]*b[k][j])%MOD)%MOD;
        }
    }
    return c;
}

vvi binary_expo(vvi mat, ll p){
    vvi res = {{1, 0},{0, 1}};
    while(p){
        if(p % 2){
            res = mult(res, mat);
        }
        p >>= 1;
        mat = mult(mat, mat);
    }
    return res;
}

int fact(ll n){
    ll p = n - 1;
    if(p <= 0){
        return n;
    }
    vvi mat = {{1, 1},{1, 0}};
    mat = binary_expo(mat, p);
    return mat[0][0];
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n; cin>>n;
    cout << fact(n);

    return 0;
}
