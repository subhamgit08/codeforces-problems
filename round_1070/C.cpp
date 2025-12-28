#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int sum(0);
    vi picked(n,0);
    for(int i=n-1;i>=0;i--){
            if(a[i]%2){
                picked[i]=1;
                sum+=a[i];
                break; 
            } 
    }
    cout<<sum<<" ";
    for(int k=2;k<=n;k++)
    { 
        int cnt(0);
        for(int i=n-1;i>=0 && cnt<k;i--){
            if((a[i]%2==0) && picked[i]!=1){
                sum+=a[i];
                if(sum%2==0) sum=0;
                cnt++;
                picked[i]=1;
            }
        }
        for (int i=0; i<n && cnt<k; i++)
        {
            if(picked[i]!=1){
                sum+=a[i];
                if(sum%2==0) sum=0;
                cnt++;
                picked[i]=1;
            }
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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