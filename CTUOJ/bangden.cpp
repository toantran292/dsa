#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    map<int, int> m;
    cin>>n;
    for(int i = 0; i < n-1; i++){
        int tmp; cin>>tmp;
        m[tmp]++;
    }
    for(int i = 1; i<=n; i++){
        if(!m[i]){
            cout << i;
            return 0;
        }
    }

    return 0;
}
