#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n,h,l;
    cin>>n>>h>>l;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int x=0,y=n-1;
    int cnt1=0,cnt2=0;
    while(x<y){
        if(a[x]<=h && a[y]<=l){
            cnt1++;
            x++;
            y--;
        }
        else if(a[x]>h) x++;
        else if(a[y]>l) y--;
    }
    x=n-1 , y=0;
    while(y<x){
        if(a[x]<=h && a[y]<=l){
            cnt2++;
            y++;
            x--;
        }
        else if(a[x]>h) x--;
        else if(a[y]>l) y++;
    }
    cout<<max(cnt1,cnt2)<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}