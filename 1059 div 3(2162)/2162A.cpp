#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        int length = len;
        vector<int> arr;
        int num;
        while(length--){
            cin>>num;
            arr.push_back(num);
        }
        int ans = *max_element(arr.begin(),arr.end());
        cout<<ans<<endl;
    }
    return 0;
}