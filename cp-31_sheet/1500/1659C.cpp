#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> arr(n+1,0);
    for(int i=1;i<=n;i++) cin>>arr[i];
    vector<int>suf(n+2,0);
    suf[n] = arr[n];
    for(int i=n-1;i>=0;i--){
        suf[i] = suf[i+1] + arr[i];
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}