#include<stdio.h>
#include<ctype.h>

int main(){
    char string[101];
    scanf("%s",&string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        string[i] = tolower(string[i]);
    }
    
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && string[i] != 'y')
        {
            printf(".%c",string[i]);
        }
        
    }
    
    return 0;
}