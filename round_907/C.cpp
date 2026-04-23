#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;


void solve() {
    int n;
    cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum = accumulate(a.begin(),a.end(),0ll);
    ll rem = sum/2;
    ll ans = sum-rem;
    sort(a.rbegin(),a.rend());
    for(ll x:a){
        if(rem<=0) break;
        rem-=x;
        ans++;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}