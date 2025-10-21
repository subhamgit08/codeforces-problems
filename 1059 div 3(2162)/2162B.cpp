#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    int i = 0 , j = s.size()-1;
    while(i<j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        if(isPalindrome(str)){
            cout<<0<<endl;
            continue;
        }
        vector<int> p0,p1;
        for(int i=0;i<n;i++){
            if(str[i] == '0'){
                p0.push_back(i+1);
            }
            else p1.push_back(i+1);
        }
        if(!p0.empty()){
            cout<<p0.size()<<endl;
            for(int idx : p0) cout<<idx<<" ";
            cout<<"\n";
        }
        else{
            cout<<p1.size()<<endl;
            for(int idx : p1) cout<<idx<<" ";
            cout<<"\n";
        }
    }
    return 0;
}