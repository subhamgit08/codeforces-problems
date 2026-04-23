#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vll a(n);
    for(auto& x:a) cin>>x;
    for(int i=0;i<n;i++){
        ll greater=0,smaller=0;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) greater++;
            else if(a[i]<a[j]) smaller++;
        }
        cout<<max(greater,smaller)<<" ";
    }
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