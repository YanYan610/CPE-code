#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i, j;
    int count;
    char country[2001][76] = {0};
    char temp[76] = {0};
    char name[76];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", country[i]);
        fgets(name, sizeof(name), stdin);  
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(country[j], country[j + 1]) > 0) {
                strcpy(temp, country[j]);
                strcpy(country[j], country[j + 1]);
                strcpy(country[j + 1], temp);
            }
        }
    }

    i = 0;
    while (i < n) {
        count = 1;

        while (i + 1 < n && strcmp(country[i], country[i + 1]) == 0) {
            count++;
            i++;
        }

        printf("%s %d\n", country[i], count);
        i++;
    }

}
