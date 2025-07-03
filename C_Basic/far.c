#include<stdio.h>
int main(){
   float far=33.8f;
   float n=far-32;
    for (size_t i = 1; i<20; i++)
    {
        printf("%f\t\t%f\n",far,n/1.8);
        n=n+1.8;
    }

}
