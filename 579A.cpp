#include <iostream>
using namespace std;

int main()
{
    int x, bacteria = 0;
    cin >> x;
    while (x > 0)
    {
        bacteria += (x & 1);
        x >>= 1;
    }
    cout<<bacteria<<endl;
    return 0;
}