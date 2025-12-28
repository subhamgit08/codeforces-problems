#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nline '\n'
void solve(){
    ll n;
    cin>>n;
    vll a(n);
    vll b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll mx(0) , mn(0);
    for(int i=0;i<n;i++){
        ll nmx = max(mx-a[i],b[i]-mn);
        ll nmn = min(mn-a[i],b[i]-mx);
        mx = nmx;
        mn = nmn;
    }
    cout<<mx<<nline;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}