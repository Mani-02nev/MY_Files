#include <stdio.h>

int main()
{
    printf("A program print Fahrenheit-Celsius\n");

    int Celsius;
    int lower, upper, step, Fahrenheit;
    lower = 0;
    upper = 300;
    step = 20;
    Fahrenheit = lower;
    printf("Fahrenheit\tCelsius\t \n");
    printf("===========\t========\n");
    while (Fahrenheit <= upper)
    {
        Celsius = (5. / 9.) * (Fahrenheit - 32);
        printf("%d\t\t%d\n", Fahrenheit, Celsius);
        Fahrenheit = Fahrenheit + step;
    }
    return 0;
    
}