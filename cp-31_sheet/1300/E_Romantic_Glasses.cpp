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
    vll prefixeven(n,0),prefixodd(n,0);
    prefixeven[0]=a[0];
    map<ll,int> mp;
    int flag=0;
    mp[(prefixodd[0]-prefixeven[0])]++;
    for(int i=1;i<n;i++){
        prefixeven[i]+=prefixeven[i-1];
        prefixodd[i]+=prefixodd[i-1];
        if(i%2==0) prefixeven[i]+=a[i];
        else prefixodd[i]+=a[i];
        mp[(prefixodd[i]-prefixeven[i])]++;
        if(mp[(prefixodd[i]-prefixeven[i])]==2||(prefixodd[i]-prefixeven[i])==0){
            flag=1;break;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}