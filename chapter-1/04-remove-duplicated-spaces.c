#include <stdio.h>

int main()
{
    int c;
    int previous_c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && previous_c == ' ')
            continue;
        else
            putchar(c);

        previous_c = c;
    }

    return 0;
}