#include <iostream>
using namespace std;

long long Non_divisle(long long n, long long k)
{
    long long low = 1, high = k + k / (n - 1);
    while (low < high)
    {
        long long mid = (low + high) / 2;
        if ((mid - mid / n) < k)
        {
            low = mid + 1;
        }
        else
            high = mid;
    }
    return low;
}

int main()
{
    int t, var;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n, k;
        cin >> n >> k;
        cout << Non_divisle(n, k) << endl;
    }

    return 0;
}