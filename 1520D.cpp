#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, long long> freq;
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int key = a - i;
            count += freq[key];
            freq[key]++;
        }
        cout << count << endl;
    }
    return 0;
}