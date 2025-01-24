#include<stdio.h>

int main(){
    int m,n,a,actual_on_length,actual_on_breadth,flagstone;
    scanf("%d %d %d",&m,&n,&a);
    actual_on_breadth = (n+a-1)/a;
    actual_on_length = (m+a-1)/a;
    flagstone = (actual_on_breadth * actual_on_length);
    printf("%d\n",flagstone);
    return 0;
}