#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int awake_until = -1;
    int sleep = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            awake_until = max(awake_until, i + k);
        } else {
            if (i > awake_until) {
                ++sleep;
            }
        }
    }

    cout << sleep << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}