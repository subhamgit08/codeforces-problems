#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

const long long MOD = 676767677;

long long countDivisors(long long n) {
    n = abs(n);
    if (n == 0) return 0;
    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i * i != n) count++;
        }
    }
    return count;
}

void solve() {
    long long x, y;
        cin >> x >> y;
        int nx=x,ny=y;
        
        long long ans;
        
        // Case 1: Onlny 1's (ny = 0)
        if (ny == 0) {
            ans = countDivisors(nx);
            cout << ans << "\n";
            for (int i = 0; i < nx; i++) {
                cout << "1" << (i < nx - 1 ? " " : "\n");
            }
            return;
        }
        
        // Case 2: Onlny -1's (nx = 0)
        if (nx == 0) {
            ans = countDivisors(ny);
            cout << ans << "\n";
            for (int i = 0; i < ny; i++) {
                cout << "-1" << (i < ny - 1 ? " " : "\n");
            }
            return;
        }
        
        // Case 3: Both nx > 0 and ny > 0
        long long total_sum = nx - ny;
        
        if (total_sum == 0) {
            // nx = ny, onlny whole arrany works
            ans = 1;
        } 
        else {
            if(total_sum>1){
                nx= nx-ny;
                ans = countDivisors(nx);
            } 
            else{
                ny = ny-nx;
                ans=countDivisors(ny);
            }
        }
        
        cout << ans % MOD << "\n";
        
        for (int i = 0; i < x; i++) cout << "1 ";
        for (int i = 0; i < y; i++) cout << "-1" << (i < y - 1 ? " " : "\n");
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}