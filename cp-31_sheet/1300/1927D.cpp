#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;


//codex generated nxt array
// void solve() {
//     int n;
//     cin >> n;

//     vi a(n + 1), nxt(n + 2, n + 1);
//     for (int i = 1; i <= n; i++) cin >> a[i];

//     for (int i = n - 1; i >= 1; i--) {
//         if (a[i] != a[i + 1]) nxt[i] = i + 1;
//         else nxt[i] = nxt[i + 1];
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int l, r;
//         cin >> l >> r;

//         if (nxt[l] <= r) cout << l << " " << nxt[l] << endl;
//         else cout << -1 << " " << -1 << endl;
//     }

//     cout << endl;
// }


void solve(){
    int n;
    cin>>n;
    vi a(n) , prev_diff(n,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) prev_diff[i] = i-1;
        else prev_diff[i] = prev_diff[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(prev_diff[r-1]>=l-1) cout<<prev_diff[r-1]+1<<" "<<r<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
