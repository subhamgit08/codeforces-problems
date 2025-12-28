#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

long long calc(vector<int>& a) {
    long long s = 0;
    for(int i = 0; i + 1 < a.size(); i++)
        s += abs(a[i] - a[i+1]);
    return s;
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long total = 0;
    for(int i = 0; i + 1 < n; i++)
        total += abs(a[i] - a[i+1]);

    long long best = 0;
    best = max(best, (long long)abs(a[0] - a[1]));
    best = max(best, (long long)abs(a[n-2] - a[n-1]));
    for(int i = 1; i + 1 < n; i++){
        long long gain =
            abs(a[i-1] - a[i]) +
            abs(a[i] - a[i+1]) -
            abs(a[i-1] - a[i+1]);

        best = max(best, gain);
    }

    cout << total - best << "\n";
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}