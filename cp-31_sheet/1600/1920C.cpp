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
    vi k;
    for(int i=1;i<=n;i++){
        if(n%i==0) k.push_back(i);
    }
    int points=0;
    for(int& num:k){
        int m=0;
        for(int i=num;i<n;i++){
            m=gcd(m,abs(a[i]-a[i-num]));
        }
        if(m>=2 || m==0) points++;
    }
    cout<<points<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}