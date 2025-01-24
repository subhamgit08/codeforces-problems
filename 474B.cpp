#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, pile, m, worms;
    cin >> n;
    vector<int> wormsum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pile;
        wormsum[i] = (i == 0 ? pile : wormsum[i - 1] + pile);
    }
    cin >> m;
    while (m--)
    {
        cin >> worms;
        int left = 0, right = n - 1, result = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (wormsum[mid] >= worms)
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << result + 1 << endl;
    }

    return 0;
}