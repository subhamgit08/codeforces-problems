#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n , x , y;
    cin>>n>>x>>y;
    vi a(n);
    map<int,vi> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]%y].push_back(a[i]);
    }
    ll ans = 0;
    for(auto& it:mp){
        vi v = it.second;
        map<int,int> mp1;
        for(int i=0;i<v.size();i++){
            mp1[v[i]%x]++;
        }
        for(auto& it:mp1){
            if(it.first==0 || (it.first == x/2 && x%2==0)){
                ll cnt = it.second;
                ans += (cnt*(cnt-1))/2;
                it.second=0;
            }
            else{
                ll cnt1 = it.second;
                ll cnt2 = mp1[x-it.first];
                ans+=cnt1*cnt2;
                mp1[x-it.first]=0;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}