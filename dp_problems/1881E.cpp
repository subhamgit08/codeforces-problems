// https://codeforces.com/problemset/problem/1881/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vi dp(n+1);
    dp[n] = 0;
    dp[n-1] = 1;
    for(int i=n-2;i>=0;i--){
        int p = 1+dp[i+1];
        int q = 1e9;
        if((i+a[i])< n) q = dp[i+a[i]+1];
        dp[i] = min(p,q);
    }
    cout<<dp[0]<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}