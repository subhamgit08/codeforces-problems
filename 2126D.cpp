#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> vec(n,vector<int>(3,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                cin>>vec[i][j];
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            if(k>=vec[i][0] && k<=vec[i][1]){
                k = max(k,vec[i][2]);
            }
        }
        cout<<k<<endl;
    }
    return 0;
}