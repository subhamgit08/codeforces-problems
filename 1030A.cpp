#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int var = n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j = 0;
    while (var--)
    {
        if (arr[j]==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
        if (j == (n-1))
        {
            break;
        }
        j++;
    }
    cout<<"EASY"<<endl;
    return 0;
}