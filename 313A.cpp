#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    if (n < 0)
    {
        int q = (n / 10);
        int rem = (temp % 10);
        for (int i = 0; i < 2; i++)
        {
            temp = (temp / 10);
        }
        int p = (temp*10) + rem;
        if (p > q)
        {
            cout<<p<<endl;
        }
        else cout<<q<<endl;
    }
    else cout<<n<<endl;
    return 0;
}