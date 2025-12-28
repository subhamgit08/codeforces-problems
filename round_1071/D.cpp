#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

// ll count(vll &a){
//     ll sum(0);
//     for(int i=0;i<a.size();i++){
//         ll num=a[0];
//         for(int j=1;j<=i;j++){
//             num = num&a[j];
//         }
//         sum += __builtin_popcountll(num);
//     }
//     return sum;
// }
void solve() {
    int n;
    cin>>n;
    int maxi = (1LL<<n)-1;
    int num=maxi;
    vll a ;
    vll seen(maxi+1,0);
    while(num){
        for(int j=0;j<=maxi;j++){
            if((j&num)==num && seen[j]==0){
                a.push_back(j);
                seen[j]=1;
            }
        }
        int msb_pos = 31 - __builtin_clz(num);
        int mask = (1 << msb_pos) - 1;
        num = num & mask;
    }
    for(int i=0;i<=maxi;i++){
        if(seen[i]==0) a.push_back(i);
    } 
    for(int i=0;i<=maxi;i++) cout<<a[i]<<" ";
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