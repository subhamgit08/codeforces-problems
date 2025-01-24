#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int>price_in_shops(n);
    for (int i = 0; i < n; i++)
    {
        cin>>price_in_shops[i];
    }
    sort(price_in_shops.begin(),price_in_shops.end());
    int q;
    cin>>q;
    // Runtime error
    // for (int i = 0; i < q; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (coins[i] >= price_in_shops[j])
    //         {
    //             count++;
    //         }    
    //     } 
    //     cout<<count<<endl;  
    //     count = 0;
    // }
    
    while (q--)
    {
        int budget;
        cin>>budget;
        int count = upper_bound(price_in_shops.begin(),price_in_shops.end(),budget) - price_in_shops.begin();
        cout<<count<<endl;
    }
    
    return 0;
}