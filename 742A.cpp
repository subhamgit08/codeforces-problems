#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0) {
        cout<<1<<endl;
        return 0;
    }
    int arr[] = {8,4,2,6};
    int result = n % 4;
    if(result==0) result = 4;
    cout<<arr[result-1]<<endl;
}