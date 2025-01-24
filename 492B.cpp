#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    double max_distance = 0;
    vector<double> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());

    double first = array[0];
    double last = (l - array[n-1]);

    for (int i = 0; i < (n - 1); i++)
    {
        double distance = array[i + 1] - array[i];
        if (distance > max_distance)
        {
            max_distance = distance;
        }
    }
    double d = max({first,last,(max_distance/2.0)});
    cout<<fixed<<setprecision(10)<<d<<endl;
    return 0;
}