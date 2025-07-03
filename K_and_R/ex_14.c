#include <stdio.h>
int main()
{
   
    int i,j,num,input;
    printf("Enter A Size Of Number:");
    scanf("%d",&input);
    printf("Histogram\n");
    printf("~~~~~~~~~");
    for ( i = 1; i <= input; i++)
    {  
        printf("\n%d|",i);
        for ( j = 1; j <=i; j++)
        {
            printf("\t*");
        }
    }
    printf("\n");
    return 0;
}
