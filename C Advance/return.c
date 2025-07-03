#include<stdio.h>
int main() {
    int a = 5, b = 2;

    if(b == 2) {
         printf("Error: Division by zero not allowed.\n");
        return 1;  // Exit with error
    }

    printf("Result: %d\n", a / b);
    return 0;
}
