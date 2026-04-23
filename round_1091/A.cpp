#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n,k;
    cin>>n>>k;
    vi a(n);
    int sum=0;
    for(auto& x:a){
        cin>>x;
        sum+=x;
    } 
    if((sum%2)!=0 || (k*n)%2==0){
        cout<<"yes"<<endl;
        return ;
    } 
    cout<<"no"<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}