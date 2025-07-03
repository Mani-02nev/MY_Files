#include <stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int b=5;
    int *p=b;
    printf("%d",*p);
    printf("\n");
    
}