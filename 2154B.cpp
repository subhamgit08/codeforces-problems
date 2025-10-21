#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt(0);
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n%2==0){
            if(arr[n-1]<arr[n-2]){
                int correction = *max_element(arr.begin(),arr.end());
                if(correction > arr[n-1]) arr[n-1] = correction;
            }
        }
        for(int i=0;i<n-1;i++){
            if((i+1) % 2 && arr[i] <= arr[i+1] && arr[i] <= arr[i-1]){
                int correction = *max_element(arr.begin(),arr.begin()+i+1);
                if(correction > arr[i+1]) arr[i] = correction;
            }
        }
        for(int i=0;i<n-1;i++){
            if(i==0 && ((i+1) % 2 != 0) && arr[i] >= arr[i+1]){
                while(arr[i]>=arr[i+1]){
                    arr[i] = arr[i] - 1;
                    cnt++;
                }
            }
            else if(((i+1) % 2 != 0) && arr[i] >= arr[i+1] && arr[i] >= arr[i-1]){
                while(arr[i]>=arr[i+1] || arr[i]>=arr[i-1]){
                    arr[i] = arr[i] - 1;
                    cnt++;
                }
            }
        }
        if(n%2==1){
            while(arr[n-1]>=arr[n-2]){
                    arr[n-1] = arr[n-1] - 1;
                    cnt++;
                }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

