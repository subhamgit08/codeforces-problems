#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> tasks(m);
    for (int i = 0; i < m; i++)
    {
        cin >> tasks[i];
    }
    int current_house = 1;
    long long time = 0;
    for (int i = 0; i < m; i++)
    {
        if (tasks[i] >= current_house)
        {
            time += (tasks[i] - current_house);
        }
        else
        {
            time += n - (current_house - tasks[i]);
        }
        current_house = tasks[i];
    }
    cout<<time<<endl;
    return 0;
}