#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> ribbon(n + 1, -1);
    ribbon[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        if (ribbon[i] != -1)
        {
            if (i + a <= n)
            {
                ribbon[i+a] = max(ribbon[i+a], ribbon[i] + 1);
            }
            if (i + b <= n)
            {
                ribbon[i+b] = max(ribbon[i+b], ribbon[i] + 1);
            }
            if (i + c <= n)
            {
                ribbon[i+c] = max(ribbon[i+c], ribbon[i] + 1);
            }
        }
    }
    cout<<ribbon[n]<<endl;
    return 0;
}