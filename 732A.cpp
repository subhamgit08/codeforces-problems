#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    if (k % 10 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        if (k % 10 == r)
        {
            cout << 1 << endl;
            return 0;
        }
        else
        {
            for (int i = 1; i < 10; i++)
            {
                int rem = ((k * i) % 10);
                if (rem == r)
                {
                    cout << i << endl;
                    break;
                }
                if (rem == 0)
                {
                    cout<<i<<endl;
                    break;
                }
                
            }
        }
    }

    return 0;
}