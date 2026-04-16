#include <stdio.h>

int main() {
    int doom[13] = {-1, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
    char date[7][10] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    int T, m, d;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &m, &d);

        int delta = (d - doom[m]) % 7;

        if (delta >= 0) {
            printf("%s\n", date[delta]);
        } else {
            printf("%s\n", date[7 + delta]);
        }
    }
}
