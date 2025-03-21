#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n+1,0);
    unordered_set<int>seen;
    for(int i = n-1 ; i >= 0 ; i--){
        seen.insert(a[i]);
        dp[i] = seen.size();
    }
    while(m--){
        int ind;
        cin>>ind;
        cout<<dp[ind-1]<<endl;
    }
}