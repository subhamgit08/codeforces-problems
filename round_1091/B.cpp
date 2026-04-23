#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int p;
    cin >> p;
    int x = a[p-1];

    // Count contiguous bad-value segments strictly left of p
    int L = 0;
    bool inSeg = false;
    for (int i = 0; i < p-1; i++)
    {
        if (a[i] != x)
        {
            if (!inSeg)
            {
                L++;
                inSeg = true;
            }
        }
        else
            inSeg = false;
    }

    // Count contiguous bad-value segments strictly right of p
    int R = 0;
    inSeg = false;
    for (int i = p; i < n; i++)
    {
        if (a[i] != x)
        {
            if (!inSeg)
            {
                R++;
                inSeg = true;
            }
        }
        else
            inSeg = false;
    }

    cout << max(2 * L, 2 * R) << endl;
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