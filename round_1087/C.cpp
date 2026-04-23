#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    int done;
    for(int i=2*n-1;i>=3;i-=2){
        cout<<"? "<<i<<" "<<i+1<<endl;
        cin>>done;
        if(done){
            cout<<"! "<<i<<endl;
            return;
        }
    }
    cout<<"? 1 3"<<endl;
    cin>>done;
    if(done){
        cout<<"! 1"<<endl;
    } 
    else{
        cout<<"? 1 4"<<endl;
        cin>>done;
        if(done) cout<<"! 1"<<endl;
        else cout<<"! 2"<<endl;
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