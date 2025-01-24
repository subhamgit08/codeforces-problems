#include <stdio.h>
#include <string.h>

int main()
{
    int x = 0;
    int n;
    scanf("%d", &n);
    char ch[n][5];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ch[i]);
    }
    char *implement = "X++", *decrement = "X--";
    char *alt_implement = "++X", *alt_decrement = "--X";
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ch[i], implement)==0 || strcmp(ch[i], alt_implement)==0)
        {
            x++;
        }
        if (strcmp(ch[i], decrement)==0 || strcmp(ch[i], alt_decrement)==0)
        {
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}