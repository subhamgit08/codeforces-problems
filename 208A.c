#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char string[201];
    scanf("%s", &string);
    int len = strlen(string);
    bool word = false;

    for (int i = 0; i < len; i++)
    {
        if (i + 2 < len && string[i] == 'W' && string[i + 1] == 'U' && string[i + 2] == 'B')
        {
            i += 2;
            if (word)
            {
                printf(" ");
                word = false;
            }
        }
        else
        {
            printf("%c", string[i]);
            word = true;
        }
    }
    // printf("\n");
    return 0;
}