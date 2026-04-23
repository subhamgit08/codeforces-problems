#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<=2){
        cout<<1<<endl;
        return;
    }
    int cnt=0,prev=-1;
    if(s[0]=='0' && s[1] == '0'){
        s[1]='1';
    }
    if(s[n-1]=='0' && s[n-2]=='0'){
        s[n-2] = '1';
    }
    for(int i=0;i<n;i++){
        if(s[i]!='1'){
            if((i-prev)>=3){
                cnt++;
                prev=i;
                s[i]='1';
            }
        }
        else{
            cnt++;
            prev=i;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}