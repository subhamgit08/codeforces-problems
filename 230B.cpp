// RUNTIME ERROR !!!
// #include <iostream>
// using namespace std;

// int main(){
//     int n ,count = 0;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         for (int j = 1; j <= arr[i]; j++)
//         {
//             if (arr[i] % j == 0)
//             {
//                 count++;
//             }
//         }
//         if (count == 3)
//         {
//             cout<<"YES"<<endl;
//         }
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> prime_founder(long long val)
{
    vector<bool> is_prime(val + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i <= val; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= val; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    long long max_val = 1000000;
    vector<bool> is_prime = prime_founder(max_val);

    for (const auto &num : numbers)
    {
        if (num < 4)
        {
            cout << "NO" << endl;
            continue;
        }
        long long root = sqrt(num);
        if (is_prime[root] && root * root == num)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}