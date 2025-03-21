#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    int len = str.size();
    vector<int> prefix(len,0);
    for(int i = 1; i<len; i++){
        prefix[i] = prefix[i-1] + (str[i] == str[i-1]);
    }
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r-1] - prefix[l-1]<<endl;
    }
}