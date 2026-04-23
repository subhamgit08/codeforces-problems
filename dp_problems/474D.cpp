#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

int n=1e5 , mod=1e9+7;
vi dp(n+1,0);
vi preSum(n+1,0);

void solve() {
    int a,b;
    cin>>a>>b;
    int ans = (preSum[b] - preSum[a-1])%mod;
    if(ans<0) ans+=mod;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t,k;
    cin >> t>>k;
    
    for(int i=0;i<k;i++) dp[i] = 1;
    dp[k]=2;
    for(int i=k+1;i<=n;i++) dp[i] = (dp[i-1] + dp[i-k])%mod;
    for(int i=1;i<=n;i++) preSum[i] = (preSum[i-1] + dp[i])%mod;
    while(t--) solve();
    return 0;
}