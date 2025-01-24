#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n , count_before = 0 , count_after = 0 , raw_count = 0 ;
        cin>>n;
        vector<char>brackets(n);
        for (int i = 0; i < n; i++)
        {
            cin>>brackets[i];
        }
        if (n == 2)
        {
            if (brackets[0] == '(' && brackets[1] == ')')
            {
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
            continue;
        }
        
        for (int i = 0; i < n-2; i+=2)
        {
            if (brackets[i] == '(' && brackets[i+1] == ')')
            {
                raw_count++;
            }
        }
        if (raw_count==(n/2))
        {
            cout<<0<<endl;
            continue;
        }
        for (int i = 0; i < n-1; i++)
        {
            if (brackets[i] == '(' && brackets[i+1] == ')')
            {
                for (int j = (i-1); j >= 0; j--)
                {
                    if (brackets[j] == ')')
                    {
                        count_before++;
                    }    
                }
                for (int k = i+2; k < n; k++)
                {
                    if (brackets[k] == '(')
                    {
                        count_after++;
                    }    
                }    
            }    
        }
        if (count_after != 0 || count_before != 0)
        {
            int count = max({count_after,count_before});
            cout<<count<<endl;
            continue;
        }
    }
    
    return 0;
}