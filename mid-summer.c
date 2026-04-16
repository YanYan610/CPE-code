#include <stdio.h>

int main() {
    int n,i,j;

    while (scanf("%d", &n) == 1) {
        int a[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - 1 - i; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        int mid1 = a[(n - 1) / 2];
        int mid2 = a[n / 2];
        int ans = 0;

        for (i = 0; i < n; i++) {
            if (a[i] == mid1 || a[i] == mid2) {
                ans++;
            }
        }

        printf("%d %d %d\n", mid1, ans, mid2 - mid1 + 1);
    }

}
