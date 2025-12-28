#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n,ans(0);
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int i(0);
    while(i<n-1){
        int j=i+1 , found(0);
        while(j<n){
            if(a[i]>a[j]){
                ans++;
                a.erase(a.begin()+j);
                n--;
                found =1;
                break;
            }
            j++;
        }
        if(!found) i++;
    }
    cout<<ans<<endl;
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