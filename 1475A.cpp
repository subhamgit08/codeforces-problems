#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            // n is even, check if it's a power of 2
            if ((n & (n - 1)) == 0)
            {
                // n is a power of 2, no odd divisor greater than 1 using a bitwise and operator .
                cout << "NO" << endl;
            }
            else
            {
                // n is even but not a power of 2, it has an odd divisor
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
