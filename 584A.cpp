#include <iostream>
using namespace std;

int main(){
    int n , t;
    cin>>n>>t;
    if (t == 10 && n == 1)
    {
        cout<<-1<<endl;
    }
    else if (n>=2 && t == 10)
    {
        cout<<1;
        for (int i = 1; i < n; i++)
        {
            cout<<0;
        }    
    }
    else{
        for (int i = 0; i < n; i++)
        {
            cout<<t;
        }   
    }
    return 0;
}