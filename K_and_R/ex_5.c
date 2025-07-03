#include<stdio.h>
int main() {
    int Celsius;
    int lower, upper, step, Fahrenheit;
    lower = 0;
    upper = 300;
    step = 20;
     printf("Fahrenheit\tCelsius\t \n");
    printf("===========\t========\n");

    printf("C\t\t F\n\n");
    Celsius = upper;
    while (Celsius >= lower) {
        Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;
        printf("%d \t\t%d\n", Celsius,Fahrenheit );
        Celsius = Celsius - step;
    }
    return 0;

}