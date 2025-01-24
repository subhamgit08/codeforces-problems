#include<stdio.h>
#include<string.h>

int main(){
    char string[101];
    scanf("%s",&string);
    int n = strlen(string);
    for (int i = 0; i < n; i++)
    {
        if (string[i] == 'H' || string[i] == 'Q' || string[i] == '9' )
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}