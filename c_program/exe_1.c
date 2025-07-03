#include<stdio.h> 
int main(){
    int time=0;
    printf("Enter a Time:");
    scanf("%d", &time);
    if (time>=4&&time<=10)
    {
        printf("Good Morning");

    }
    else if (time>=10&&time<=16)
    {
        printf("Good aftern noon");
    }
    else if (time>=16&&time<=19)
    {
        printf("Good evening");
    }
    else if (time>=19&&time<=21)
    {
        printf("Good Night");
    }
    else if ( time>=22&&time<=24 )
    {
        printf("Good Night And Have A Sweet Dream");
    }
    else
    {
printf("Invalid Time");


    }
    
    
    
    printf("\n");
    return 0;
}
