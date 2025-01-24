#include <iostream>
using namespace std;

int main()
{
    int n, steps;
    cin >> n;
    if (n <= 5)
    {
        steps = 1;
    }
    else
    {
        if (n % 5 == 0)
        {
            steps = (n / 5);
        }
        else
        {
            steps = (n / 5) + 1;
        }
    }
    cout << steps << endl;
    return 0;
}