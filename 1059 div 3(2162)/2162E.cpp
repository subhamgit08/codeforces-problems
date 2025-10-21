#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve(){
    int n ,k;
    cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(i+1);
    }
    for(int i=0;i<n;i++){
        st.erase(a[i]);
    }
    if(st.empty()){
        for(int i=0;i<k;i++){
            cout<<a[i]<<" "<<endl;
        }
        return;
    }
    int o = *st.begin();
    for (int i = 0; i < n; i++)
    {
        st.insert(i+1);
    }
    st.erase(o);
    st.erase(a[n-1]);
    cout<<o<<" "<<endl;
    for (int i = 0; i < k-1; i++)
    {
        if(st.size()){
            cout<<*st.begin()<<" "<<endl;
            st.erase(st.begin());
        }
        else{
            cout<<a[n-1]<<endl;
        }
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
