#include<stdio.h>

int main(){
    int n,t=0,count=0;
    scanf("%d",&n);
    char numbers[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    } 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (numbers[i][j]==1)
            {
                t++;
            }
        }
        if (t>=2)
            {
                count++;
            }
        t = 0;
    }
    printf("%d\n",count);
        
    return 0;    
}
