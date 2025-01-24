#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int b, g, count = 0;
    cin >> b;
    vector<int> boys(b);
    for (int i = 0; i < b; i++)
    {
        cin >> boys[i];
    }
    cin >> g;
    vector<int> girls(g);
    for (int i = 0; i < g; i++)
    {
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int i = 0, j = 0;
    while (i < g && j < b)
    {
        if (abs(girls[i] - boys[j]) <= 1)
        {
            count++;
            i++;
            j++;
        }
        else if (girls[i] < boys[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << count << endl;
    return 0;
}