#include <stdio.h>
int main()
{
    int num1 = 5, num2 = 7, sum = 0;
    char opp;
    
     printf("Enter A Operator(+,-,*,/):");
        scanf("%c", &opp);
    while(opp != 'e' && opp != 'E');{

        printf("=============================\n");

        printf("Enter  A   First   Number:");
        scanf("%d", &num1);
        printf("Enter  A   scend   Number:");
        scanf("%d",&num2);
    
        switch (opp)
        {
        case '-':
            printf("              result:%d", num1 - num2);
            break;e
        case '+':
            printf("              result:%d", num1 + num2);
            break;
        case '/':
            printf("              result:%d", num1 / num2);

            break;
        case '*':
            printf("             result:%d", num1 * num2);
            break;
        default:
            printf("\nwrong operator");
            break;
        }
        printf("\n=== Execution Successful  ===");
        printf("\n");
        
    
    return 0;
}