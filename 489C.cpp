#include <iostream>
#include <string>
using namespace std;
void Smallest_and_largest(int m,int s){
    if (s == 0)
    {
        if (m == 1)
        {
            cout<<"0 0"<<endl;
        }
        else cout<<"-1 -1"<<endl;
        return;
    }
    if (s > 9 * m)
    {
        cout<<"-1 -1"<<endl;
        return;
    }
    
    string largest(m , '0') , smallest(m,'0');
    int sum = s;
    for (int i = 0; i < m; i++)
    {
        int digit = min(9,sum);
        largest[i] = '0' + digit;
        sum -= digit;
    }
    sum = s;
    for (int i = m-1; i >= 0; i--)
    {
        int digit = min(9,sum);
        smallest[i] = '0' + digit;
        sum -= digit;
    }
    if (smallest[0] == '0')
    {
        for (int i = 1; i < m; i++)
        {
            if (smallest[i] > '0')
            {
                smallest[0] = '1';
                smallest[i]--;
                break;
            }  
        }   
    }
    cout<<smallest<<" "<<largest<<endl;
}

int main(){
    int m , s;
    cin>>m>>s;
    Smallest_and_largest(m,s);
    return 0;
}