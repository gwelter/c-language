#include <stdio.h>

int main()
{
    int c = 0, lines = 0, tabs = 0, espaces = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            lines++;
            break;

        case '\t':
            tabs++;
            break;
        case ' ':
            espaces++;
            break;
        default:;
        }
    }

    printf("\nlines count: %d\n", lines);
    printf("tabs count: %d\n", tabs);
    printf("Espaces count: %d\n", espaces);

    return 0;
}