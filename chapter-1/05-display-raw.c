#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
        case '\n':
            printf("\\n");
            break;

        case '\b':
            printf("\\b");
            break;

        case '\\':
            putchar('\\');
            break;

        case '\t':
            printf("\\t");
            break;

        default:
            putchar(c);
        }
    }

    return 0;
}