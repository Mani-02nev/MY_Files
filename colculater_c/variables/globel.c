#include <stdio.h>
#include "globel.h"

int a = 0;
int b = 0;
int optional = 0;
extern int get_input()
{
     printf("\n================================\n");
     printf("ENTER A FIRST NUMBER:");
     scanf("%d", &a);
     printf("ENTER A SECOND NUMBER:");
     scanf("%d", &b);
     printf("================================\n");
     return 0;
}