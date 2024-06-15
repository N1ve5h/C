#include <stdio.h>

void main()
{
    float lower, upper, step;
    float celsius, fahr;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 10;   /* step size */
    celsius = lower;
    printf("C \t F\n");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0 * celsius) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}