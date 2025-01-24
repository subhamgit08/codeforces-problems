// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     int n, count = 1;
//     scanf("%d", &n);
//     char **string = (char **)malloc(n * sizeof(char *));
//     char **original = (char **)malloc(n * sizeof(char *));

//     // Allocate memory for each string
//     for (int i = 0; i < n; i++)
//     {
//         string[i] = (char *)malloc(33 * sizeof(char));
//         original[i] = (char *)malloc(33 * sizeof(char));
//     }

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", string[i]);
//         strcpy(original[i],string[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (strcmp(string[i], string[j]) == 0 && i != j)
//             {
//                 sprintf(string[j], "%s%d", string[i], count);
//                 count++;
//             }
//         }
//         count = 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(original[i],string[i])==0)
//         {
//             printf("OK\n");
//         }
//         else printf("%s\n", string[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         free(string[i]);
//         free(original[i]);
//     }
//     free(string);
//     free(original);
//     return 0;
// }



// using cpp for better memory and runtime management
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    map<string,int>data;
    while (n--)
    {
        cin>>s;
        if (data.count(s)==0)
        {
            cout<<"OK"<<endl;
            data[s] = 1;
        }
        else{
            cout<<s<<data[s]<<endl;
            data[s]++;
        }
    }
    
    return 0;
}