#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char keyboard[] = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    char c;

    while ((c = getchar()) != EOF) {

        if (c == ' ' || c == '\n') {
            putchar(c); 
        } 
        else {
            for (i = 0; i < strlen(keyboard); i++) {
                if (keyboard[i] == c) {
                    printf("%c", keyboard[i - 2]);
                    break;
                }
            }
        }
    }

}
