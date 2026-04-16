#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[1000];
    int count[26] = {0};
    int i, j;

    scanf("%d", &n);
    getchar();  

    while (n--) {
        fgets(str, sizeof(str), stdin);

        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                count[str[i] - 'A']++;
            } 
            else if (str[i] >= 'a' && str[i] <= 'z') {
                count[str[i] - 'a']++;
            }
        }
    }

    int max = 0;
    for (i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }

    for (i = max; i >= 1; i--) {
        for (j = 0; j < 26; j++) {
            if (count[j] == i) {
                printf("%c %d\n", j + 'A', i);
            }
        }
    }
}
