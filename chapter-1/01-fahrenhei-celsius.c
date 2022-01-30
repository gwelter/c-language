#include <stdio.h>

int celsiusToFahrenheit()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -273.15; /* lower limit of temperatuire scale */
    upper = 300;     /* upper limit */
    step = 20;       /* step size */
    celsius = lower;
    puts("||============||");
    puts("||  C ||    F ||");
    puts("||============||");
    while (celsius <= upper)
    {
        fahr = celsius * 1.8 + 32;
        printf("||%3.0f ||%6.1f||\n", celsius, fahr);
        celsius = celsius + step;
    }
    puts("================");
}

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    puts("||============||");
    puts("||  F ||    C ||");
    puts("||============||");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("||%3.0f ||%6.1f||\n", fahr, celsius);
        fahr = fahr + step;
    }
    puts("================");
    celsiusToFahrenheit();
    return 0;
}