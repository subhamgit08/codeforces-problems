#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(auto& x:a) cin>>x;
    unordered_map<int,int> primeCount;

    for(int x : a){
        int val = x;
        for(int p = 2; 1LL * p * p <= val; p++){
            while(val % p == 0){
                primeCount[p]++;
                val /= p;
            }
        }
        if(val > 1) primeCount[val]++;
    }

    for(auto &it : primeCount){
        if(it.second % n != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
