#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x , y , a , b;
        cin>>x>>y>>a>>b;
        long long diagonal = min(x,y);
        long long straight = abs(x-y);
        long long cost = diagonal * min(2*a,b) + straight * a;
        cout<<cost<<endl;
    }
    return 0;
}