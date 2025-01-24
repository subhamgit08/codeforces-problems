#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }
    int current_time = 0, left = 0, max_books = 0;
    for (int right = 0; right < n; right++)
    {
        current_time += time[right];
        while (current_time > t)
        {
            current_time -= time[left];
            left++;
        }
        max_books = max(max_books, right - left + 1);
    }
    cout<<max_books<<endl;
    return 0;
}