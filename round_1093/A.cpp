#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(auto& x:a) cin>>x;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i:a)cout<<i<<" ";
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