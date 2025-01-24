#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , k , i = 1;
    cin>>n>>k;
    vector<int>number(n-1);
    for (int i = 0; i < (n-1); i++)
    {
        cin>>number[i];
    }
    while (i <= (n-1))
    {
        int cell = i + number[i-1];
        i = cell;
        if (cell == k)
        {
            cout<<"YES"<<endl;
            return 0;
        }   
    }
    cout<<"NO"<<endl;
    return 0;
}