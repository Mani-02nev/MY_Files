#include<stdio.h>
int main(){
    char c='a';
    int i;
    printf("Enter A Boolean Number(0 or 1): ");
    scanf("%d",&i);
    if (i==0)
    {
        for (c = 'a'; c <= 'z'; ++c)
        printf("%c ", c);
    }
    else if (i==1)
    {
        for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    }
    else
    printf("You Selected Number Is Not Boolean Number");
    printf("\n");
    return 0;
    
}