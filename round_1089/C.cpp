#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vi a(n);
    vi b(n);
    for(auto& x:a) cin>>x;
    for(auto& x:b) cin>>x;
    int ans = (int)(a[0] != gcd(a[0],a[1])) + (int)(a[n-1] != gcd(a[n-1],a[n-2]));
    for(int i=1;i<n-1;i++){
        if(a[i]!=lcm(gcd(a[i],a[i+1]) , gcd(a[i],a[i-1]))) ans++;
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