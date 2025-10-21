#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int cnt = 0;
        int last = -k;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && i - last >= k) {
                cnt++;
                last = i;
            }
        }



        // int full0 = 1;
        // for(int i=0;i<n;i++){
        //     if(s[i] != '0'){
        //         full0 = 0;
        //         break;
        //     } 
        // }
        // if(full0){
        //     cout<<0<<endl;
        //     continue;
        // } 
        // if(n==k){
        //     cout<<1<<endl;
        //     continue;
        // }
        // int ind = 0 , first1 = 0;
        // while(ind<n){
        //     if(s[ind] == '1'){
        //         if(ind == 0) cnt++;
        //         else{
        //             int found = 0;
        //             for(int j=ind-1;j>ind-k;j--){
        //                 if(s[j] == '1'){ found = 1; break;}
        //             }
        //             if(!found) cnt++;
        //         }
        //     }
        //     ind++;
        // }
        cout<<cnt<<endl;
    }
    return 0;
}