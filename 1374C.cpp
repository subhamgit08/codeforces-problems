#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string brackets;
        cin >> brackets;
        int open = 0, closed = 0;
        for (char ch : brackets)
        {
            if (ch == '(')
            {
                open++;
            }
            else
            {
                if (open > 0)
                {
                    open--;
                }
                else
                {
                    closed++;
                }
            }
        }
        cout<<max(open , closed)<<endl;
    }

    return 0;
}