#include <stdio.h>

int main() {
    long long S, D;

    while (scanf("%lld %lld", &S, &D) == 2) {
        long long people = S;
        long long sum = 0;

        while (1) {
            sum += people; 

            if (sum >= D) {
                printf("%lld\n", people);
                break;
            }

            people++;
        }
    }

}
