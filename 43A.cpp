// My code
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, team1 = 0, team2 = 0;
//     cin >> n;
//     string s[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//     }
//     string s1 = s[0];
//     string s2;
//     for (int i = 1; i < n; i++)
//     {
//         if (s[i] != s1)
//         {
//             s2 = s[i];
//             break;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == s1)
//         {
//             team1++;
//         }
//         else
//         {
//             team2++;
//         }
//     }
//     if (team1 > team2)
//     {
//         cout << s1 << endl;
//     }
//     else
//         cout << s2 << endl;
//     return 0;
// }

// Code by chatgpt
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    int n , max_score = 0;
    cin>>n;
    unordered_map<string , int> score;
    string team , winning_team;
    for (int i = 0; i < n; i++)
    {
        cin>>team;
        score[team]++;
        if (score[team] > max_score)
        {
            max_score = score[team];
            winning_team = team;
        }   
    }
    cout<<winning_team<<endl;
    return 0;
}