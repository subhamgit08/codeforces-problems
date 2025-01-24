//This will cause runtime error for larger values of n
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, k, even = 2, odd = 1;
//     scanf("%d", &n);
//     scanf("%d", &k);
//     int *arr = (int *)malloc(n * sizeof(int));
//     if (n % 2 != 0)
//     {
//         n += 1;
//     }
    
//     for (int i = 0; i < (n / 2); i++)
//     {
//         arr[i] = odd;
//         odd += 2;
//     }
//     for (int i = (n / 2); i < n; i++)
//     {
//         arr[i] = even;
//         even += 2;
//     }
//     printf("%d\n", arr[k - 1]);
//     free(arr);
//     return 0;
// }

//optimized code to avoid runtime error
#include<stdio.h>

int main(){
    long long n, k , result;
    scanf("%lld", &n);
    scanf("%lld", &k);
    long long count_odd = (n+1) / 2;
    if (k <= count_odd)
    {
        result = 2*k - 1 ;
    }
    else{
        result = 2 * (k - count_odd);
    }
    printf("%lld\n", result);
    return 0;
}