#include <iostream>
using namespace std;

int main()
{
    int n, t;
    char tempo;
    cin >> n;
    cin >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            // my code
            // if (s[i] == 'B' && s[i + 1] == 'G')
            // {
            //     tempo = s[i];
            //     s[i] = s[i + 1];
            //     s[i + 1] = tempo;
            //     i += 2;
            //     continue;
            // }
            // if (s[i] == 'B' && s[i + 1] == 'B' || s[i] == 'G' && s[i + 1] == 'G' || s[i] == 'G' && s[i + 1] == 'B')
            // {
            //     i++;
            //     continue;
            // }

            // optimized code
            if (s[i] == 'B' && s[i + 1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}