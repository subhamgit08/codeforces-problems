//My attempt
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, sum = 0, taxi = 1, member_four = 0, member_three = 0, member_two = 0, member_one = 0;
//     scanf("%d", &n);
//     int *arr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 4)
//             member_four++;

//         if (arr[i] == 3)
//             member_three++;

//         if (arr[i] == 2)
//             member_two++;

//         if (arr[i] == 1)
//             member_one++;
//     }
//     if (member_three >= member_one)
//     {
//         taxi = member_four + member_three + (member_two / 2) + (member_two % 2);
//     }
//     if (member_three < member_one)
//     {
//         member_one = member_one - member_three;
//         if (member_two % 2 == 0)
//         {
//             if (member_one <= 4)
//             {
//                 taxi = member_four + member_three + (member_two / 2) + 1;
//             }
//             else if (member_one > 4)
//             {
//                 if (member_one % 4 == 0)
//                 {
//                     taxi = member_four + member_three + (member_two / 2) + (member_one / 4);
//                 }
//                 else
//                     taxi = member_four + member_three + (member_two / 2) + (member_one / 4) + 1;
//             }
//         }
//         else
//         {
//             if (member_one > 2)
//             {
//                 member_one = member_one - 2;
//                 if (member_one <= 4)
//                 {
//                     taxi = member_four + member_three + (member_two / 2) + 2;
//                 }

//                 else if (member_one > 4)
//                 {
//                     if (member_one % 4 == 0)
//                     {
//                         taxi = member_four + member_three + (member_two / 2) + (member_one / 4) + 1;
//                     }
//                     else
//                         taxi = member_four + member_three + (member_two / 2) + (member_one / 4) + 2;
//                 }
//             }
//             else{
//                 taxi = member_four + member_three + (member_two / 2) + 1;
//             }
//         }
//     }

//     printf("%d\n", taxi);
//     return 0;
// }

//Actual answer by chatgpt
#include <stdio.h>

int main() {
    int n, group_size;
    int count[5] = {0}; // Index 1 to 4 represent group sizes

    // Read the number of groups
    scanf("%d", &n);

    // Count the number of groups of each size
    for (int i = 0; i < n; i++) {
        scanf("%d", &group_size);
        count[group_size]++;
    }

    int taxis = 0;

    // Groups of 4 need individual taxis
    taxis += count[4];

    // Pair groups of 3 with groups of 1
    int min_1_3 = count[3] < count[1] ? count[3] : count[1];
    taxis += count[3];
    count[1] -= min_1_3;

    // Pair groups of 2 together
    taxis += count[2] / 2;
    count[2] %= 2;

    // If there's one group of 2 left, it can take up to two groups of 1
    if (count[2] > 0) {
        taxis++;
        count[1] -= count[1] >= 2 ? 2 : count[1];
    }

    // Remaining groups of 1 can share taxis, four per taxi
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4;
    }

    // Output the total number of taxis needed
    printf("%d\n", taxis);

    return 0;
}
