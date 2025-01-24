#include<stdio.h>
#include<stdlib.h>

int main(){
    int n , day = 1 , day_1 = 0;
    scanf("%d",&n);

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    if (n == 1)
    {
        printf("1\n");
        free(arr);
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i <= (n-2) && arr[i]<=arr[i+1])
        {
            day++;
        }
        if (i == (n-2) || arr[i] > arr[i+1])
        {
            if (day>day_1)
            {
                day_1 = day;
            }
            day = 1;
        }        
    }
    printf("%d\n",day_1);
    free(arr);
    return 0;
}