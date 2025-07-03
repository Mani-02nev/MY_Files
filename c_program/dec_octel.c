#include <stdio.h>
#include <math.h>

int main()
{
    int num1, rem, quot,octal=0,i=1,j;
    int octalNumber[500];
    printf("\t~~~~Decimal to Octal Converter~~~~");
    printf("\n");
    printf("\t Enter the decimal number:");
    scanf("%d", &num1);
    quot = num1;
    while (quot != 0)
    {
        octalNumber[i++] = quot% 8;
        quot = quot/ 8;
    }
    for (j = i - 1; j > 0; j--)
        octal = octal*10 + octalNumber[j];
    printf("\t Equivalent octal  no is: %d  \n",octal);
    printf("\t=== Code Execution Successful ===\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n");
    return 0;
}
