#include <stdio.h>
#include <string.h>

int main() {
    char s[101][101];
    int index = 0;
    int max = 0;
    int i,j;

    while (fgets(s[index], sizeof(s[index]), stdin) != NULL) {
        int len = strlen(s[index]);

        if (len > 0 && s[index][len - 1] == '\n') {
            s[index][len - 1] = '\0';
            len--;
        }

        if (max < len) {
            max = len;
        }

        index++;
    }

    for (i = 0; i < max; i++) {
        for (j = index - 1; j >= 0; j--) {
            if (strlen(s[j]) > i) {
                printf("%c", s[j][i]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
