#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int var = (n - 2);
    string arr;
    cin >> arr;
    if (n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    int i = 0;
    do
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        i++;
    } while (var--);
    cout << count << endl;
    return 0;
}