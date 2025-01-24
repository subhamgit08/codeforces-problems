#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[101];
    scanf("%s", string);
    int len = strlen(string);

    // Check if all characters are uppercase
    int all_upper = 1;
    for (int i = 0; i < len; i++) {
        if (!isupper(string[i])) {
            all_upper = 0;
            break;
        }
    }

    // Check if first is lowercase and rest are uppercase
    int first_lower_rest_upper = islower(string[0]);
    for (int i = 1; i < len; i++) {
        if (!isupper(string[i])) {
            first_lower_rest_upper = 0;
            break;
        }
    }

    // Case 1: All characters are uppercase
    if (all_upper) {
        for (int i = 0; i < len; i++) {
            string[i] = tolower(string[i]);
        }
    }
    // Case 2: First lowercase and rest uppercase
    else if (first_lower_rest_upper) {
        string[0] = toupper(string[0]);
        for (int i = 1; i < len; i++) {
            string[i] = tolower(string[i]);
        }
    }

    // Case 3: Otherwise, leave the string unchanged
    printf("%s\n", string);
    return 0;
}
