#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }
    int amazing_count = 0;
    int highest_point = points[0];
    int lowest_point = points[0];
    for (int i = 1; i < n; i++)
    {
        if (points[i] > highest_point)
        {
            amazing_count++;
            highest_point = points[i];
        }
        else if (points[i] < lowest_point)
        {
            amazing_count++;
            lowest_point = points[i];
        }
    }
    cout<<amazing_count<<endl;
    return 0;
}