#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn=(1<<10);
int n, k;
ll dp[10][maxn][101];
ll st[20001];
ll gs[20001];
int cnt=0;

void dfs(int node, ll sum, ll status){
    if(node>=n){
        st[++cnt]=status;
        gs[cnt]=sum;
        return;
    }
    dfs(node+1, sum, status);
    dfs(node+2, sum+1, status+(1<<node));

}

void solve(){
    cin >> n >> k;
    dfs(0,0,0);
    for(int i=1;i<=cnt;i++){
        dp[1][i][gs[i]]=1;
    }
    for(int i=2; i<=n;i++){
        for(int j=1;j<=cnt;j++){
            for(int s=1;s<=cnt;s++){
                if(st[j]&st[s])continue;
                if((st[j]<<1)&st[s])continue;
                if(st[j]&(st[s]<<1))continue;
                for(int p=k;p>=gs[j];p--){
                    dp[i][j][p]+=dp[i-1][s][p-gs[j]];
                }
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=cnt;i++){
        ans+=dp[n][i][k];
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
        freopen("text.in", "r", stdin);
    #endif // LOCAL
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
