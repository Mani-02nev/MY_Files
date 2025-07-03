#include<stdio.h>
int main(){
    int i=5,num_1=0,num_2=0,count=5 ;
    num_2=i++;
    num_1=++i;
    printf("%d\n",num_1);
    printf("%d\n",num_2);
    
    for (i = 0; i < count; i++)
    {
       printf("%d\n",i);
    }
    for (i = 0; i < count; ++i)
    {
       printf("%d\n",i);
    }

}