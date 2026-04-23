#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n, k;
        cin >> n >> k;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        bool possible = true;
    for (int i = k - 1; i < n; i++) {
            // Window: [i-k+1, i] (inclusive)
            int start = i - k + 1;
            int end = i;
            
            // Get elements in a[start..end]
            multiset<int> a_elements;
            for (int j = start; j <= end; j++) {
                a_elements.insert(a[j]);
            }
            
            // Get elements in b[start..end] (excluding -1's)
            multiset<int> b_elements;
            vector<int> neg_one_positions;
            
            for (int j = start; j <= end; j++) {
                if (b[j] != -1) {
                    b_elements.insert(b[j]);
                } else {
                    neg_one_positions.push_back(j);
                }
            }
            
            // Check if non-(-1) elements in b are subset of a
            bool valid = true;
            for (int elem : b_elements) {
                if (a_elements.count(elem) == 0) {
                    valid = false;
                    break;
                }
                a_elements.erase(a_elements.find(elem));
            }
            
            if (!valid) {
                possible = false;
                break;
            }
            
            // Now a_elements contains elements that must fill -1 positions
            if (a_elements.size() != neg_one_positions.size()) {
                possible = false;
                break;
            }
            
            // Fill -1's with remaining elements
            auto it = a_elements.begin();
            for (int pos : neg_one_positions) {
                b[pos] = *it;
                ++it;
            }
        }
        
        // Final verification: check that all windows are satisfied
        if (possible) {
            // Double-check by verifying all windows again
            for (int i = k - 1; i < n; i++) {
                int start = i - k + 1;
                int end = i;
                
                multiset<int> a_set, b_set;
                for (int j = start; j <= end; j++) {
                    a_set.insert(a[j]);
                    b_set.insert(b[j]);
                }
                
                if (a_set != b_set) {
                    possible = false;
                    break;
                }
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}