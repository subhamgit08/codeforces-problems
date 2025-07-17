#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int mini = INT_MAX;
        while(x>0){
            int q = x%10;
            x /= 10;
            mini = min(mini,q); 
        }
        cout<<mini<<endl;
    }
    return 0;
    
}