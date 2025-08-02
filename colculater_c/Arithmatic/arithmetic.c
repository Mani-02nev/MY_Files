#include <stdio.h>
#include "/Users/gobinath/study/mani/colculater_c/varables/globel.h"

void sum()
{
     get_input();
     printf("Addition RESULT : %d\n", a + b);
}
void sub()
{
     get_input();
     printf("SUBFRACTION RESULT : %d\n", a - b);
}
void multi()
{
     get_input();
     printf("MULTIPLICATION RESULT : %d\n", a * b);
}
void div()
{
     get_input();
     printf("DIVISION RESULT : %d\n", a / b);
}
void mod()
{
     get_input();
     printf("MODULE RESULT : %d\n", a % b);
}
int arith_op()
{
     int opt;
     printf("\n****************************************\n");
     printf("   WELCOME TO ARITHMETIC CALCULATIONS\n");
     printf("****************************************\n");
     printf("\nOPTION:\n1)ADDITION\n2)SUBFRACTION\n3)MULTIPLEACTION\n4)DIVISION\n5)MODULE");
     printf("\nENTER YOUR OPTION:");
     scanf("%d", &opt);
     switch (opt)
     {
     case 1:
          sum();
          break;
     case 2:
          sub();
          break;
     case 3:
          multi();
          break;
     case 4:
          div();
          break;
     case 5:
          mod();
          break;
     default:
          printf("ENTER VALID OPTION\n");
     }
     return 0;
}
