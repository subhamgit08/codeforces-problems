#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    if(n<4){
        cout<<"NO"<<endl;
        return 0;
    }
    bool foundAB = false , foundBA = false;
    for(int i=0;i<n-1;i++){
        if(!foundAB && s[i]=='A' && s[i+1] == 'B'){
           foundAB = true;
           i++;
        }
        else if(foundAB && s[i] == 'B' && s[i+1] == 'A'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    foundAB = foundBA = false;
    for(int i=0;i<n-1;i++){
        if(!foundBA && s[i]=='B' && s[i+1] == 'A'){
           foundBA = true;
           i++;
        }
        else if(foundBA && s[i] == 'A' && s[i+1] == 'B'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}