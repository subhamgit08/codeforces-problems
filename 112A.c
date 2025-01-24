#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int result;
    char str1[101] , str2[101];
    scanf("%s",&str1);

    scanf("%s",&str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        str1[i] = tolower(str1[i]); 
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        str2[i] = tolower(str2[i]); 
    }

    if (strcmp(str1,str2) == 0)
    {
        result = 0;
    }
    else{
        for (int i = 0; i < strlen(str1); i++)
        {
            if (str1[i] > str2[i])
            {
                result = 1;
                break;
            }
            if (str1[i] < str2[i])
            {
                result = -1;
                break;
            }
        }
    }   
    printf("%d\n",result);
    return 0;   
}