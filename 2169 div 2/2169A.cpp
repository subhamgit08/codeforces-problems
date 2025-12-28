#include <bits/stdc++.h>
using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// void solve(){
//     int n,a;
//     cin>>n>>a;
//     vi marble(n);
//     vi diff(n);
//     int cnt(0),sum(0);
//     for(int i=0;i<n;i++){
//         scanf("%d",&marble[i]);
//         if(marble[i]==a) cnt++;
//         sum+=marble[i];
//     }
//     sort(marble.begin(),marble.end());
//     // for (int i = 0; i < n; i++)
//     // {
//     //     diff[i] = abs(a-marble[i]);
//     // }
    
//     if(cnt>=(n/2)){
//         cout<<1<<endl;
//         return;
//     } 
//     int diff_l=0 , diff_r(0);
//     for (int i = 0; i < n; i++)
//     {
//         if (marble[i]<=a)
//         {
//             diff_l++;
//         }
//         else{
//             diff_r++;
//         }   
//     }
//     if(diff_l>diff_r) cout<<a-1<<endl;
//     else cout<<a+1<<endl;
//     return;
// }

typedef long long ll;

int n;
ll a;


int countWins(const vector<ll>& v, ll a, ll b) {
    int wins = 0;
    for (ll x : v) {
        ll da = llabs(x - a);
        ll db = llabs(x - b);
        if (db < da) wins++;
    }
    return wins;
}

void solve() {
    cin >> n >> a;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll bestB = 0;
    int bestScore = -1;

    
    if (a - 1 >= 0) {
        ll b = a - 1;
        int score = countWins(v, a, b);
        if (score > bestScore) {
            bestScore = score;
            bestB = b;
        }
    }

    
    {
        ll b = 2000000000LL;
        int score = countWins(v, a, b);
        if (score > bestScore) {
            bestScore = score;
            bestB = b;
        }
    }

    cout << bestB << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}