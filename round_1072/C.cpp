// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// typedef vector<int> vi;
// typedef vector<ll> vll;

// void solve() {
//     long long n, k;
//         cin >> n >> k;

//         if (k > n) {
//             cout << -1 <<endl;
//             return;
//         }

//         long long cur = n;
//         long long time = 0;

//         while (cur > k) {
//             long long a = cur / 2;
//             long long b = cur - a;

//             if (k <= a)
//                 cur = a;
//             else
//                 cur = b;

//             time++;
//         }

//         if (cur == k)
//             cout << time <<endl;
//         else
//             cout << -1 << endl;
// }

// int main() {
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--) solve();
//     return 0;
// }