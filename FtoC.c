#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
// %d -> print variable type int
// %ld -> print variable type long int
// %lld -> print variable type long long int
// %hd -> print vatiable type short int
// %f -> print variable type float
// %3.0f print at least 3 characters wide, 0 decimal place
// %6.1f print at least 6 characters wide, 1 decimal place
// 5/9 truncates (auto remove decimals), 5.0/9.0 does not
// %o octal, %x hexidecimal, %c character, %s string, %% itself
void main() {
    float lower, upper, step;
    float celsius, fahr;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 10;   /* step size */
    fahr = upper;
    printf("F \t C\n");
    while (fahr >= lower)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr = fahr - step;
    }
}