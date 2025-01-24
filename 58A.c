#include <stdio.h>
#include <string.h>

int main()
{
    char string[101], target[] = "hello";
    int n = 0;
    scanf("%s", &string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == target[n])
        {
            n++;
            if (n == 5)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}