#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,count1(0),count0(0),count0max(-1);
    cin>>n;
    while(n--){
        cin>>a;
        if(a==1){
            count1++;
            if(count0>0){
                count0--;
            }
        }
        else{
            count0++;
            if(count0>count0max){
                count0max = count0;
            }
        }
    }
    cout<<count1+count0max<<endl;
}