//My attempt
// #include<stdio.h>

// int main(){
//     int a , b , c , abs_mul , abs_sum ,result;
//     scanf("%d %d %d",&a ,&b ,&c);
//     abs_sum = a + b + c;
//     abs_mul = a * b * c;
//     if (a>=c)
//     {
//         result = a*(b+c);
//     }
//     if (a<c)
//     {
//         result = c*(b+a);
//     }
//     if (abs_mul >= abs_sum)
//     {
//         if (abs_mul < result)
//         {
//             printf("%d\n",result);
//         }
//         else printf("%d\n",abs_mul);
//     }
//     if (abs_mul < abs_sum)
//     {
//         if (abs_sum < result)
//         {
//             printf("%d\n",result);
//         }
//         else printf("%d\n",abs_sum);
//     }
    
//     return 0;
// }

//easier attempt
#include<stdio.h>

int main(){
    int a , b , c , result;
    scanf("%d %d %d",&a ,&b ,&c);
    int res1 = a + b + c;
    int res2 = a * b * c;
    int res3 = a*(b+c);
    int res4 = c*(b+a);
    result = res1;
    if (result < res2)
    {
        result = res2;
    }
    if (result < res3)
    {
        result = res3;
    }
    if (result < res4)
    {
        result = res4;
    }
    printf("%d\n",result);
    return 0;
}