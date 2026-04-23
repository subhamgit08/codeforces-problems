#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve()
{
    ll n, c, k;
    cin >> n >> c >> k;
    vll a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= c)
        {
            if (k > 0)
            {
                int diff = c - a[i];
                if (k > diff)
                {
                    c += c;
                    k -= diff;
                }
                else
                {
                    c += a[i] + k;
                    k = 0;
                }
            }
            else{
                c+=a[i];
            }
        }
    }
    cout<<c<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}