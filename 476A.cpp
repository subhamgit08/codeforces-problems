#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1 << endl;
    }
    // else if(n == m) cout<<m<<endl;
    // else{
    //     int moves = (n + 1)/2;
    //     moves = max(moves,m);
    //     if(moves == m) cout<<m<<endl;
    //     else{
    //         int rem = moves % m;
    //         while (rem!=0)
    //         {
    //             moves++;
    //             rem = moves % m;
    //         }
    //         cout<<moves<<endl;
    //     }
    // }

    else
    {
        int moves = (n + 1) / 2; // Minimum possible moves
        if (moves % m != 0)
        {
            moves = ((moves + m - 1) / m) * m; // Round up to the nearest multiple of m
        }

        cout << moves << endl;
    }
    return 0;
}