#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin>>n;
    int start=1 , end=n , cnt=1,i=n-1;
    vector<int> ans(n);
    while(start<=end){
        if(cnt%2!=0){
            ans[i--] = end;
            end--;
        } 
        else{
            ans[i--] = start;
            start++;
        } 
        cnt++;
    }
    for(int i:ans) cout<<i<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}