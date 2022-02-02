#include <stdio.h>

#define LOWER 0   /* LOWER limit of temperatuire scale */
#define UPPER 300 /* UPPER limit */
#define STEP 20   /* STEP size */

int celsiusToFahrenheit()
{
    float fahr, celsius;
    celsius = LOWER;
    puts("||============||");
    puts("||  C ||    F ||");
    puts("||============||");
    while (celsius <= UPPER)
    {
        fahr = celsius * 1.8 + 32;
        printf("||%3.0f ||%6.1f||\n", celsius, fahr);
        celsius = celsius + STEP;
    }
    puts("================");
}

int main()
{
    float fahr, celsius;
    fahr = LOWER;
    puts("||============||");
    puts("||  F ||    C ||");
    puts("||============||");
    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("||%3.0f ||%6.1f||\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    puts("================");
    celsiusToFahrenheit();
    return 0;
}