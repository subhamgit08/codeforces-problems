#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    int limit=3*n;
    vi a(limit);
    int i=1;
    for(int j=0;j<limit;j+=3) a[j] = i++;
    for(int j=1;j<limit;j++){
        if(a[j]==0) a[j] = i++;
    }
    for(int num:a) cout<<num<<" ";
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