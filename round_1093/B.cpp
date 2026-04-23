#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n , m;
    cin>>n>>m;
    vll a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int same=1;
    for(ll i=1;i<n;i++){
        if(a[i]==a[i-1]) same++;
        else same=1;
        if(same>=m) {
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;

}


int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}