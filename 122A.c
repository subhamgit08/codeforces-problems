#include<stdio.h>

int islucky(int n){
    int r;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if (r != 4 && r != 7)
        {
            return 0;
        }   
    }
    return 1;
}
int main(){
    int n , r;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (islucky(i) && n%i==0)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}