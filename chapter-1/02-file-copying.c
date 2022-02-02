#include <stdio.h>

int main() {
    int c;
    long nc;
    while ((c = getchar()) != EOF) {
        nc++;
    }

    printf("\nCharacters count: %ld\n", nc);
    printf("EOF: %d\n", EOF);
    printf("EOF == c: %d\n", EOF == c);

    return 0;
}