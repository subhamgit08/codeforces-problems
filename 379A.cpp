#include <iostream>
using namespace std;

int main()
{
    int a, b, hours = 0;
    cin >> a >> b;
    int rem = 0;
    while (a > 0)
    {
        hours += a;
        rem += a % b;
        a = a / b;
        if (rem >= b)
        {
            a += rem / b;
            rem = rem % b;
        }
    }
    cout << hours << endl;
    return 0;
}