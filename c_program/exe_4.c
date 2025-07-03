#include<stdio.h>
int main(){
    int num=0,i=0,x=0;
    char alpha[27];
    for (int i = 0; i < 26; i++) 
    {
        alpha[i] = 'A' + i;
    }
    alpha[26]='\0';
    printf("Enter A Number:");
    scanf("%d",&num);
    do
    {
        for ( ; x<num;x++)
    {
        printf("%c",alpha[i]);
    }
    printf("\n");
    x=0;
    num--;
    i++;
    } while (num!=0);
    printf("\n");
    
    return 0;
}
