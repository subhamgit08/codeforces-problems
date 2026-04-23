// https://codeforces.com/contest/977/problem/F

#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int best_len=0;
    int best_end=0;
    map<int,int>dp;
    for(int i=0;i<n;i++){
        int x = arr[i];
        if(dp.count(x-1)){
            dp[x] = dp[x-1]+1;
        }
        else dp[x] = 1;
        if(dp[x]>best_len){
            best_len = dp[x];
            best_end = x;
        }
    }
    vi ans;
    int cur = best_end;
    for(int i=n-1;i>=0 && best_len>0;i--){
        if(arr[i]==cur){
            ans.push_back(i+1);
            cur--;
            best_len--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i:ans) cout<<i<<" ";
    return 0;
}