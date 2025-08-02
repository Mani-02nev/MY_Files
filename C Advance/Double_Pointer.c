#include <stdio.h>
int main()
{
     int a = 30;
     int *pt = &a;
     int **dpt = &pt;
     printf("Original value: %d\n\n", a);
     printf("Value via ptr_to_value: %d\n", *pt);
     printf("Value via ptr_to_ptr_to_value: %d\n", **dpt);
}