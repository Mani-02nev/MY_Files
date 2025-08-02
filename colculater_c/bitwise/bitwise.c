#include <stdio.h>
#include "bitwise.h"
#include "/Users/gobinath/study/mani/colculater_c/varables/globel.h"
static int get__input()
{
     printf("ENTER A FIRST NUMBER:");
     scanf("%d", &a);
     if (optional < 3)
     {
          printf("ENTER A SECOND NUMBER:");
          scanf("%d", &b);
     }
     else if (optional == 3)
     {
     }
     else if (optional > 3)
     {
          printf("ENTER SHIFT NUMBER: ");
          scanf("%d", &b);
     }

     return 0;
}
void bit_and()
{
     get__input();
     printf("AND RESULT : %d \n", a&b);
}
void bit_or()
{
     get__input();
     printf("OR RESULT : %d\n", a ^ b);
}
void bit_not()
{
     get__input();
     printf("NOT RESULT: %d\n", ~a);
}
void bit_right_shift()
{
     get__input();
     printf("RIGHT SHIFT RESULT: %d\n", a >> b);
}
void bit_left_shift()
{
     get__input();
     printf("LEFT SHIFT RESULT: %d\n", a << b);
}

int bit_op()
{
     printf("\n****************************************\n");
    printf("   WELCOME TO BITWISE CALCULATIONS\n");
    printf("****************************************\n");
     printf("\nOPTION:\n1)AND\n2)OR\n3)NOT\n4)RIGHT SIFT\n5)LEFT SIFT\n");
     printf("\nENTER YOUR OPTION:");
     scanf("%d", &optional);
     if (optional == 1)
     {
          bit_and();
     }
     else if (optional == 2)
     {
          bit_or();
     }
     else if (optional == 3)
     {
          bit_not();
     }
     else if (optional == 4)
     {
          bit_right_shift();
     }
     else if (optional == 5)
     {
          bit_left_shift();
     }
     else
     {
          printf("\nENTER VALID OPTION");
     }
     return 0;
     
}
