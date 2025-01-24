#include <stdio.h>
#include <string.h>

int main()
{
    char string[101];
    int count = 1;
    scanf("%s",&string);
    for (int i = 1; i < strlen(string); i++)
    {
        if (string[i] == string[i-1])
        {
            count++;
            if (count>=7)
            {
                printf("YES\n");
                return 0;
            }
            
        }
        else count = 1;
    }
    printf("NO\n");

    return 0;
}