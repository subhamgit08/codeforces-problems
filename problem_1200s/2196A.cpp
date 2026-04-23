#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    _int128 p,q;
    cin>>p>>q;
    int turn=0;
    while(p>0 && q>1){
        if(3*p == 2*q){
            cout<<"Bob"<<endl;
            return;
        }
        if(turn%2){
            if(3*p < 2*q){
                q--;
            }
            else{
                p--;
            }
        }
        else{
            if(3*p < 2*q){
                p--;
            }
            else q--;
        }
        turn++;
    }
    cout<<"Alice"<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}