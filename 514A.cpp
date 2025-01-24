#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        if (digit == 9 && i == 0)
        {
            continue;
        }
        if (digit > 4)
        {
            digit = 9 - digit;
            s[i] = digit + '0';
        }
    }
    cout << s << endl;
    return 0;
}