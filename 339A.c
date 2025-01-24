// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int compare(const void* a, const void* b){
//     return (*(int* )a - *(int* )b);
// }

// int main(){
//     char string[101];
//     scanf("%s",&string);
//     int count = 0 , numbers[101];
//     char *token = strtok(string,"+");
//     while (token!=NULL)
//     {
//         numbers[count++] = atoi(token);
//         token = strtok(NULL,"+");
//     }

//     qsort(numbers,count,sizeof(int),compare);
    
//     for (int i = 0; i < count; i++)
//     {
//         if (i>0)
//         {
//             printf("+");
//         }
        
//         printf("%d",numbers[i]);
//     }
    
//     return 0;
// }


#include<stdio.h>
#include<string.h>

int main(){
    char string[101];
    scanf("%s",&string);
    int count1 = 0 , count2 = 0 , count3 = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '1')
        {
            count1++;
        }
        if (string[i] == '2')
        {
            count2++;
        }
        if (string[i] == '3')
        {
            count3++;
        }
    }
    int plus = 1;
    for (int i = 0; i < count1; i++)
    {
        if (!plus)
        {
            printf("+");
        }
        printf("1");
        plus = 0;
    }
    for (int i = 0; i < count2; i++)
    {
        if (!plus)
        {
            printf("+");
        }
        printf("2");
        plus = 0;
    }
    for (int i = 0; i < count3; i++)
    {
        if (!plus)
        {
            printf("+");
        }
        printf("3");
        plus = 0;
    }
    return 0;
}