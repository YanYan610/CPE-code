#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[1005];
    int i;

    while (scanf("%s", n) == 1) {
        if (strcmp(n, "0") == 0) {
            break;
        }

        int oddSum = 0, evenSum = 0;
        int len = strlen(n);

        for (i = 0; i < len; i++) {
            int digit = n[i] - '0';

            if (i % 2 == 0) {   
                oddSum += digit;
            } else {          
                evenSum += digit;
            }
        }

        int diff = abs(oddSum - evenSum);

        if (diff % 11 == 0) {
            printf("%s is a multiple of 11.\n", n);
        } else {
            printf("%s is not a multiple of 11.\n", n);
        }
    }

    return 0;
}
