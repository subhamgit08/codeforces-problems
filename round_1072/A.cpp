#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    long long n;
        cin >> n;

        if (n == 2) cout << 2 << '\n';
        else if (n == 3) cout << 3 << '\n';
        else if (n == 5) cout << 1 << '\n';
        else if (n % 2 == 0) cout << 0 << '\n';
        else cout << 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}