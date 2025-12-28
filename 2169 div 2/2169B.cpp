#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    string s;
    cin>>s;
    int len = s.size();
    if(len==1){
        cout<<1<<endl;
        return;
    }
    int flagast = 1;
    for (int i = 0; i < len; i++)
    {
        if(s[i]=='*' && (i!=len-1 && i!=0)){
            cout<<-1<<endl;
            return;
        }
    }
    string target1 = ">*<";
    // string target2 = "><";

    size_t pos1 = s.find(target1);
    // size_t pos2 = s.find(target2);
    // || pos2 != string::npos
    if (pos1 != string::npos) {
        cout << -1 << endl;
        return;
    }
    
    // int maxi(INT_MIN);
    // int i=0;
    // while(i<len-1)
    // {
    //     int maxcnt=1;
    //     while(s[i]==s[i+1]){
    //         maxcnt++;
    //         i++;
    //     }
    //     maxi = max(maxi,maxcnt);
    //     i++;
    // }
    // cout<<maxi<<endl;
    int start(0),end(len-1);
    int cnt_start(1),cnt_end(1);
    while(start<len && s[start] == s[start+1]){ cnt_start++; start++;}
    while(start<len && s[end] == s[end-1]) {cnt_end++; end--;}
    int ans = max(cnt_end,cnt_start);
    cout<<ans<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}