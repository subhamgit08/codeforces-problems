#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(auto& x:a) cin>>x;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxi = max(a[i]^a[j],maxi);
        }
    }
    cout<<maxi<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}