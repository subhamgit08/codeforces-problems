#include<stdio.h>

int main(){
    int n,k,contestant=0;
    scanf("%d %d",&n,&k);
    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&score[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (score[i]>=score[k-1] && score[i] > 0)
        {
            contestant++;
        }
    }    
    printf("%d\n",contestant);
    return 0;
}    