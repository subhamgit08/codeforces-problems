#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n) , sorted_arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sorted_arr[i] = arr[i];
    }
    sort(sorted_arr.begin() , sorted_arr.end());
    if (arr == sorted_arr) {
        cout << "yes\n1 1\n";
        return 0;
    }
    int l = 0 , r = n-1;
    while (l < n && arr[l] == sorted_arr[l])
    {
        l++;
    }
    while (r > l && arr[r] == sorted_arr[r])
    {
        r--;
    }
    reverse(arr.begin() + l, arr.begin() + r + 1);
    if (arr == sorted_arr)
    {
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    } 
    else cout<<"no"<<endl;
    return 0;
}