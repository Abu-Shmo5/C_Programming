// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. 

#include <stdio.h>

void main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = -20;
    upper = 160;
    step = 20;
    
    printf("C\tF\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * 1.8 + 32;
        printf("%.1f\t%.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
} 