#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    string s;
    cin>>s;
    int len=s.length();
    int cnt=0;
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]) cnt++;
    }
    if(cnt<=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}