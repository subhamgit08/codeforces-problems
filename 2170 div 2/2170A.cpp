#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    } 
    else if(n==2){
        cout<<9<<endl;
        return;
    } 
    if(n>=3){
        int sum1 = 1LL*n*n + 1LL*n*n-n + 1LL*n*n -1;
        int sum2 = 1LL*n*n-1 + 1LL*n*n-2 + 1LL*n*n -n-1 + 1LL*n*n;
        int sum3 = 1LL*n*n-n + 1LL*n*n-n-1+1LL*n*n-n-2+1LL*n*n-1LL*2*n-1+ 1LL*n*n-1;
        cout<<max({sum1,sum2,sum3})<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}