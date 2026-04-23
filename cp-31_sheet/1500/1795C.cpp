// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// typedef vector<int> vi;
// typedef vector<ll> vll;

// void solve() {
//     int n;
//     cin>>n;
//     vi a(n) , b(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(int i=0;i<n;i++) cin>>b[i];
//     vll ans(n,0);
//     int i=n-1;
//     for(int c=0;c<n;c++){
//         int j=n-1;
//         int ind = i;
//         while(ind>=0){
//             ans[j]+=min(a[ind],b[j]);
//             a[ind]-=min(a[ind],b[j]);
//             j--;
//             ind--;
//         }
//         i--;
//     }
//     for(int k=0;k<n;k++) cout<<ans[k]<<" ";
//     cout<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--) solve();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vll a(n+1) , b(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    vll pr(n+1,0);
    for(int i=1;i<=n;i++) pr[i] = pr[i-1]+b[i]; //presum
    vll cnt(n+2,0) , ans(n+2,0) ; 
    for(int i=1;i<=n;i++){
        ll x = a[i] + pr[i-1];
        auto j = upper_bound(pr.begin(),pr.end(),x) - pr.begin();
        if(j<=n) ans[j] += a[i] - (pr[j-1] - pr[i-1]); //handling the partial test
        cnt[i]++;
        cnt[j]--;
    }  
    //presum of cnt(full test) and getting the ans array
    for(int i=1;i<=n;i++){
        cnt[i] += cnt[i-1];
        ans[i] += cnt[i]*b[i] ;
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}