#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n,1);
    for(int i=1;i<n;i++) a[i] = (2*i+1)*(2*i-1);
    for(auto i:a) cout<<i<<" ";
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