#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

//solution by me
// void solve(){
//     int n,y,r;
//     cin>>n>>y>>r;
//     int ans(0);
//     ans+=r;
//     n-=r;
//     if(n>=y/2) ans+=y/2;
//     else if(n<y/2) ans += n;
//     cout<<ans<<endl;
// }

//optimized solution by tle
void solve(){
    int n,y,r;
    cin>>n>>y>>r;
    cout<<min(n,r+y/2)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}