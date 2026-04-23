#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    ll p,q;
    cin>>p>>q;
    int cnt=0;
    // int gridL=0,gridS=0;
    if(q>=2){
        // cnt=1;
        q = (q-2);
        if(p>=q) p -=q;
        if(p%3==0){
            cnt = q+1+(p/3);
            cout<<"1 "<<cnt<<endl;
        } 
        else cout<<-1<<endl;
    }
    else{
        p-=2;
        if(p%3==0){
            cnt = 1+(p/3);
            cout<<"1 "<<cnt<<endl;
        } 
        else cout<<-1<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}