#include <stdio.h>

int main() {
    int n,i;

    while (scanf("%d", &n) == 1 && n != 0) {
        char binary[50];
        int index = 0;
        int count = 0;

        int temp = n;

        while (temp > 0) {
            binary[index] = (temp % 2) + '0';
            if (temp % 2 == 1) {
                count++;
            }
            temp /= 2;
            index++;
        }

        printf("The parity of ");
        for (i = index - 1; i >= 0; i--) {
            printf("%c", binary[i]);
        }
        printf(" is %d (mod 2).\n", count);
    }
}
