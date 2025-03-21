#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        double result = 360.0 / (180-a);
        if (result == (int)result)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}