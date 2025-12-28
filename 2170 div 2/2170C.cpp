#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n;
    ll k;
    int ans(0);
    cin>>n>>k;
    vi q(n);
    vi r(n);
    vector<bool> q_used(n, false);
    vector<bool> r_used(n, false);
    for (int i = 0; i < n; i++)
    {
        cin>>q[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>r[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (q_used[i]) continue;
        for (int j = 0; j < n; j++)
        {
            if (r_used[j]) continue;
            int rem = k-r[j];
            if(rem%q[i] == 0){
                ans++;
                q_used[i] = true; 
                r_used[j] = true;
                break;
            } 
        }
        
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}