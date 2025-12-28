#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nline '\n'
void solve(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    n = a.size();
    vi vis(n,0);
    int poss=1;
    for(int i=0;i<n;i++){
        if(vis[i]) continue;
        for(int j=2*a[i];j<=k;j+=a[i]){
            auto it = lower_bound(a.begin(),a.end(),j);
            if(it!=a.end() && *it==j) vis[it-a.begin()] = 1;
            else{
                poss = 0;
                break;
            }
        }
        if(!poss) break;
    }
    if(!poss){
        cout<<-1<<endl;
        return;
    }
    vi res;
    for(int i=0;i<n;i++){
        if(vis[i]==0) res.push_back(a[i]);
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++) cout<<res[i]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}