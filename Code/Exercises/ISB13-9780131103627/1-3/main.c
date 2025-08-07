// Exercise 1-3. Modify the temperature conversion program to print a heading above the table. (Example 1-3 / 1-4)

#include <stdio.h>

void main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("F\tC\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
} 