#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    long long s, k, m;
        cin >> s >> k >> m;

        long long n = m / k;
        long long r = m % k;

        long long x;
        if (k >= s) {
            x = s;
        } else {
            x = (n % 2 == 0) ? s : k;
        }

        cout << max(0LL, x - r) << '\n';
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}