#include <stdio.h>
#include "global.h"
#include "globel.h"

// Colors
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define CYAN "\033[0;36m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RESET "\033[0m"
#define YELLOW_BG "\033[43m"
#define BLUE_BG "\033[44m"
#define MAGENTA_BG "\033[45m"
#define WHITE_TEXT "\033[97m"

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
     printf(GREEN "Addition RESULT : %d\n" RESET, a + b);
}

void sub()
{
     get_input();
     printf(RED "Subtraction RESULT : %d\n" RESET, a - b);
}

void multi()
{
     get_input();
     printf(YELLOW "Multiplication RESULT : %d\n" RESET, a * b);
}

void div()
{
     get_input();
     if (b != 0)
          printf(CYAN "Division RESULT : %d\n" RESET, a / b);
     else
          printf(RED "Error: Division by zero!\n" RESET);
}

void mod()
{
     get_input();
     if (b != 0)
          printf(MAGENTA "Modulo RESULT : %d\n" RESET, a % b);
     else
          printf(RED "Error: Modulo by zero!\n" RESET);
}

int arith_op()
{
     int opt;
     printf(BOLD BLUE_BG WHITE_TEXT "\n****************************************\n");
     printf("   WELCOME TO ARITHMETIC CALCULATIONS   \n");
     printf("****************************************\n" RESET);
     printf("\nOPTION:\n");
     printf("1) " GREEN "ADDITION" RESET "\n");
     printf("2) " RED "SUBTRACTION" RESET "\n");
     printf("3) " YELLOW "MULTIPLICATION" RESET "\n");
     printf("4) " CYAN "DIVISION" RESET "\n");
     printf("5) " MAGENTA "MODULO" RESET "\n");

     printf("\nENTER YOUR OPTION: ");
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
          printf(RED "ENTER VALID OPTION\n" RESET);
     }
     return 0;
}
