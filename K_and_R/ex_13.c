#include<stdio.h>
int main(){
    five numbers histogram 
    int i,j;
    int num;
    printf("Enter  number:");
    for ( i = 1; i <= 5; i++)
    {
        scanf("%d",&num);
        printf("\n%d|",num);
        for ( j = 1; j <= num; j++)
        {
            printf("\t*");
        }
        

    }
    histogram size set for user
    
}