#include<bits/stdc++.h>
using namespace std;
bool myprime(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(myprime(n)){
            cout<<"NO"<<endl;
            continue;
        }
        vector<long long> ans;
        bool found = false;
        for(int i=2;i*i<=n && !found;i++){
            if(n%i != 0) continue;
            long long q = n/i;
            for(int j=i+1;j*j<=q;j++){
                if(q%j!=0) continue;
                long long k = q/j;
                if(k == j) continue;
                if(1LL * i * j * k == n){
                    ans = {i,j,k};
                    found = true;
                    break;
                }
            }
        }
        if(ans.empty()) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i:ans){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}