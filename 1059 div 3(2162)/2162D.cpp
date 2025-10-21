#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll diff(ll l , ll r){
    ll a,b;
    cout<<"1 "<< l+1 << " " <<r+1<<endl;
    cin>>a;
    cout<<"2 "<< l+1 << " " <<r+1<<endl;
    cin>>b;
    return b-a;
}

void solve(){
    int n;
    cin>>n;
    ll start , end;
    {
        ll low = 0 , high = n-1;
        while(low<high){
            ll mid = (low+high)/2;
            if(diff(low,mid)){
                high = mid;
            }
            else{
                low=mid+1;
            }
        }
        start = low;
    }
    cout<<"2 1 "<<n<<endl;
    ll temp;
    cin>>temp;
    ll sum_og = n*(n+1)/2;
    end = start - 1 + temp-sum_og;
    cout<<"! "<<start+1<<" "<<end+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}