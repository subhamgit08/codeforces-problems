#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vll arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll ans = arr[0];
    ll diff = arr[1]-arr[0];
    if(diff>arr[0]) ans=diff;
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