#include <stdio.h>

int main() {
    int T;
    long long s, d;

    scanf("%d", &T);

    while (T--) {
        scanf("%lld %lld", &s, &d);

        if (s < d || (s + d) % 2 != 0) {
            printf("impossible\n");
        } else {
            long long a = (s + d) / 2;
            long long b = (s - d) / 2;
            printf("%lld %lld\n", a, b);
        }
    }
}
