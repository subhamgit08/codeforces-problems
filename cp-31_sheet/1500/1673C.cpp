#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vll;
int mod = 1e9 + 7;
int N = 4e4+1;

int check(int n)
{
    string s = to_string(n);
    string c = s;
    reverse(c.begin(), c.end());
    return (c == s);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> a;
    for (int i = 1; i < N; i++)
    {
        if (check(i))
            a.push_back(i);
    }
    int sz = a.size();
    vector<int> dp(N, 0);
    dp[0] = 1;
    for (int i = 0; i < sz; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if((j-a[i])>=0) dp[j] = (dp[j] + dp[j - a[i]]) % mod;
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout<<dp[n]<<endl;
    }
    return 0;
}