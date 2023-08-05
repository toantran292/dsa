#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
string binary;
vector<int> k(N, 0);
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> binary;
    int CBZ = 0;
    for(auto bit: binary){
        if(bit - '0') {
            k[CBZ]++;
            CBZ = 0;
        } else CBZ++;
    }
    for(int i = 1; i < binary.length(); i++){
        cout << k[i] << " ";
    }

    return 0;
}
