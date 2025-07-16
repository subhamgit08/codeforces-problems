#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    long long countmax(0) , countmin(0);
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long maxDiff = arr[n-1] - arr[0];
    if(maxDiff == 0){
        cout<<maxDiff<<endl;
        cout<<(1LL*n*(n-1) / 2);
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i] == arr[0]) countmin++;
        if(arr[i] == arr[n-1]) countmax++;
    }
    cout<<maxDiff<<endl;
    cout<<(countmin*countmax)<<endl;
    return 0;
}