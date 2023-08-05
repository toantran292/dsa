#include <bits/stdc++.h>
using namespace std;

const long long R = 10000000000;
int n;
string s;

bool isSix(int i){
    return s.substr(i, 3) == "110";
}

long long solve(){
    if(n == 1){
        return max(1, 2*(s[0] == '1'))*R;
    }
    if(n == 2){
        return (s == "10" || s == "11")*R;
    }
    if(n == 3){
        return isSix(0)*R;
    }
    // n > 3
    int counter = 0;
    if(s[0] == '0'){
        if(s[1] == '0') return 0;
        int k = 1;
        while(isSix(k)){
            k += 3;
            counter++;
        }
        if(k > n - 1) return R - counter;
        if(n - 1 - k > 2) return 0;

        string t = s.substr(k, 2);
        cout << t << endl;
        return (t == "11" || t == "1")*(R - counter - 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> n >> s;

    cout << solve();

    return 0;
}
