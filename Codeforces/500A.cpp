#include <bits/stdc++.h>
using namespace std;

vector<int> path;
int n, t;

string DFS(int s){
    if(s == -1 || s > t) return "NO";
    if(s == t) return "YES";
    return DFS(s + path[s]);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> n >> t;
    path.resize(n + 1, -1);
    for(int i = 1; i < n; i++) cin >> path[i];
    cout << DFS(1);
    return 0;
}

