#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.size();
        int c0 = count(str.begin(),str.end(),'0');
        int c1 = n - c0;
        int min_changes = min(c0 , c1);
        int cost = n - min_changes;
        cout<<cost<<endl;
    }
    return 0;
}