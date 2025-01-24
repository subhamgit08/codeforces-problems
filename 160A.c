#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void* a, const void* b){
    return (*(int* )b - *(int* )a);
}
int main(){
    int n , sum_total = 0 , sum = 0 , coin = 0;
    scanf("%d",&n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //sorting in descending order
    qsort(arr,n,sizeof(int),compare);

    //sum of the total array
    for (int i = 0; i < n; i++)
    {
        sum_total += arr[i];
    }
    
    //condition check
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        coin++;
        if (sum > (sum_total/2))
        {
            break;
        }   
    }
    printf("%d\n",coin);
    free(arr);
    return 0;
}