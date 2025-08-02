#include <stdio.h>
#include "other.h"
#include "/Users/gobinath/study/mani/colculater_c/varables/globel.h"
void Equal()
{
     get_input();
     printf("RESULT :%s\n", a == b ? "TRUE" : "FALSE");
}
void not_Equal()
{
     get_input();
     printf("RESULT :%s\n", a != b ? "TRUE" : "FALSE");
}
void grat()
{
     get_input();
     printf("RESULT :%s\n", a > b ? "TRUE" : "FALSE");
}
void less()
{
     get_input();
     printf("RESULT :%s\n", a < b ? "TRUE" : "FALSE");
}
void gr_equal()
{
     get_input();
     printf("RESULT :%s\n", a >= b ? "TRUE" : "FALSE");
}
void le_equal()
{
     get_input();
     printf("RESULT :%s\n", a <= b ? "TRUE" : "FALSE");
}

int other_op()
{
     printf("\n****************************************\n");
     printf("   WELCOME TO OTHER CALCULATIONS\n");
     printf("****************************************\n");
     printf("\nOPTION:\n1)Equal to\n2)Not Equal to\n3)Greater than\n4)Less than\n5)Greater than or equal to\n6)Less than or equal to\n");
     printf("\nENTER YOUR OPTION:");
     scanf("%d", &optional);
     switch (optional)
     {
     case 1:
          Equal();
          break;
     case 2:
          not_Equal();
          break;
     case 3:
          grat();
          break;
     case 4:
          less();
          break;
     case 5:
          gr_equal();
          break;
     case 6:
          le_equal();
          break;
     default:
          break;
     }
     return 0;
}
