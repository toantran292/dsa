#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
const int N = 400005;
int n, d[N], a[N], res = 0;

vector<int> alls;
vector<pi> times;


int findI(int x){
    return lower_bound(alls.begin(), alls.end(), x) - alls.begin() + 1;
}

void update(int l, int r){
    d[l]++;
    d[r]--;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> n;

    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        times.push_back({l, r});

        alls.push_back(l);
        alls.push_back(r);
    }

    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());

    for(auto item: times){
        int l = findI(item.first), r = findI(item.second);
        update(l, r);
    }

    a[0] = 0;
    for(int i = 1; i < alls.size(); i++){
        a[i] = a[i-1] + d[i];
        res = max(res, a[i]);
    }

    cout << res;
}
