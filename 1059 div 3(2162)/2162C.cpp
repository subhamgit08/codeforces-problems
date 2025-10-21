#include <bits/stdc++.h>
using namespace std;
#define clz __builtin_clzll
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a , b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        int lena = clz(1) - clz(a);
        int lenb = clz(1) - clz(b);
        if(lena == lenb){
            cout<<1<<endl<<(a^b)<<endl;
        }
        else if(lena > lenb){
            cout<<2<<endl<<(a ^ b ^ (1LL<<lena))<<" "<<(1LL<<lena)<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}