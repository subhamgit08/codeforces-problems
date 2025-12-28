#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n , ans(0) , cnto(0) , cnt(0);
    cin>>n;
    n<<=1;
    vi a(n);
    unordered_map<int,int> fr;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        fr[a[i]]++;
    }
    for(auto [x,y] : fr){
        if(y&1){
            ans++;
            cnto++;
        }
    }
    for(auto [x,y] : fr){
        if(y&1 ^ 1){
            if(y&2){
                ans+=2;
            }
            else cnt++;
        }
    }
    if(cnto<2) cout << ans + 2*(cnt-cnt%2)<<endl;
    else cout << ans + 2*cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}