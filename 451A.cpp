#include <iostream>
using namespace std;

int main(){
    int player = 0;
    int m , n;
    cin>>n>>m;
    while ((m*n) != 0)
    {
        player = !player;
        m--;
        n--;
    }
    if (!player)
    {
        cout<<"Malvika"<<endl;
    }
    else cout<<"Akshat"<<endl;
    
    return 0;
}