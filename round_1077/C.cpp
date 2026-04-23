#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vi a(n);
    int maxi = INT_MIN , mini = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    } 
    vi b(a);
    sort(b.begin(),b.end());
    int k=1e9;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            k = min(k,max(a[i]-mini,maxi-a[i]));
        }
    }
    if(k==1e9) k =-1;
    cout<<k<<endl;
} 

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}