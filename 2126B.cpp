#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n , k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int peak = 0;
        int i=0;
        while(i<=n-k){
            bool canhike = true;
            for(int j=i;j<i+k;j++){
                if(vec[j]!=0){
                    canhike = false;
                    break;
                }
            }
            if(canhike){
                peak++;
                i = i+k+1;
            }
            else{
                i++;
            }
        }
        cout<<peak<<endl;
    }
    return 0;
}