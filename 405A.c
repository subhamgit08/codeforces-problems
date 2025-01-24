#include<stdio.h>
#include<stdlib.h>
int compare(const void* a , const void* b){
    return (*(int* )a - *(int* )b);
}

int main(){
    int a[101] , n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}