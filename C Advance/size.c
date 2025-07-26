#include <stdio.h>
int main()
{
     int a = 10;
     char ch;
     float flt;
     char *b = &a;
     double bo;
     // *b = 20;
     // int *a;
     // printf(" add of a :  %d \n", &a);
     // printf(" add of b :  %d \n", *a);
     printf(" add of a :  %d \n", *b);
     printf("Size of a: %lu\n", sizeof(a));
     printf("Size of a: %lu\n", sizeof(ch));
     printf("Size of a: %lu\n", sizeof(flt));
     printf("Size of a: %lu\n", sizeof(bo));
}
