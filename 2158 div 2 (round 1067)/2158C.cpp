#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int maxSubArraySum(const vll& a) {
    if (a.empty()) return 0; 

    int max_so_far = a[0];
    int current_max = a[0];
    
    for (int i = 1; i < a.size(); i++) {
        current_max = max(a[i], current_max + a[i]); 
        
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}
void solve(){
    int n,k,c(0);
    cin>>n>>k;
    vll a(n);
    vll b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    if(k&1){
        auto maxinb = max_element(b.begin(),b.end());
        int indb = maxinb - b.begin();
        a[indb] = a[indb] + b[indb];
    }
    cout<<maxSubArraySum(a)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}