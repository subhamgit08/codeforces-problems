#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char words[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &words[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int length = strlen(words[i]);
        if (length == 0) {
            printf("\n"); 
            continue; 
        }
        
        if (length>10)
        {
            printf("%c%d%c\n",words[i][0],length-2,words[i][length-1]);
        }
        else{
            printf("%s\n",words[i]);
        }
        
    }
    return 0;
} 