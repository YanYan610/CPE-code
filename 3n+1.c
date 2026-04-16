#include <stdio.h>

int cycleLength(long long n) {
    int count = 1;

    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        count++;
    }

    return count;
}

int main() {
    int i,j,n;

    while (scanf("%d %d", &i, &j) == 2) {
        int a = i, b = j;
        int max = 0;

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        for (n = a; n <= b; n++) {
            int len = cycleLength(n);
            if (len > max) {
                max = len;
            }
        }

        printf("%d %d %d\n", i, j, max);
    }
}
