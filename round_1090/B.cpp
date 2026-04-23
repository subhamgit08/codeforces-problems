#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    vi a(7);
    for(auto& x:a) cin>>x;
    sort(a.begin(),a.end());
    int sum=a[6];
    for(int i=5;i>=0;i--) sum -= a[i];
    cout<<sum<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}