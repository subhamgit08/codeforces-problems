#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n,m;
    cin>>n>>m;
    vi a(n);
    for(auto& x:a) cin>>x;
    vi trailingZeroes(n,0);
    ll totalDigits=0;
    for(int i=0;i<n;i++){
        while(a[i]%10==0){
            trailingZeroes[i]++;
            a[i]/=10;
            totalDigits++;
        }
        while(a[i]){
            a[i]/=10;
            totalDigits++;
        }
    }
    sort(trailingZeroes.begin(),trailingZeroes.end(),greater<int>());
    for(int i=0;i<n;i+=2){
        totalDigits-=trailingZeroes[i];
    }
    if(totalDigits>m) cout<<"Sasha"<<endl;
    else cout<<"Anna"<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}