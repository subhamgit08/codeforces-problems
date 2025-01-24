#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , count_even = 0 , count_odd = 0 , index;
    scanf("%d",&n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
            if (count_even > 1)
            {
                break;
            }    
        }
        if (arr[i] % 2 != 0)
        {
            count_odd++;
            if (count_odd > 1)
            {
                break;
            }
        }    
    }
    for (int i = 0; i < n; i++)
    {
        if (count_even > count_odd)
        {
            if (arr[i] % 2 != 0)
            {
                index = i;
                break;
            }   
        } 
        if (count_even < count_odd)
        {
            if (arr[i] % 2 == 0)
            {
                index = i;
                break;
            }   
        }    
    }
    printf("%d\n",index+1);
    free(arr);
    return 0;
}