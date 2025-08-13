#include <stdio.h>
#include "bitwise.h"
#include "global.h"

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
#include "globel.h"
#include <unistd.h>

// Colors
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define CYAN "\033[0;36m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RED "\033[0;31m"
#define MAGENTA "\033[0;35m"
#define BLUE_BG "\033[44m"
#define WHITE_TEXT "\033[97m"
          void animate_text(const char *text, useconds_t delay)
          {
               while (*text)
               {
                    printf("%c", *text++);
                    fflush(stdout);
                    usleep(delay); // delay in microseconds
               }
          }

          static int get__input()
          {
               printf(GREEN "ENTER FIRST NUMBER: " RESET);
               scanf("%d", &a);

               if (optional < 3)
               {
                    printf(GREEN "ENTER SECOND NUMBER: " RESET);
                    scanf("%d", &b);
               }
               else if (optional > 3)
               {
                    printf(GREEN "ENTER SHIFT NUMBER: " RESET);
>>>>>>> 60d17d9 (commit on 13aug)
                    scanf("%d", &b);
               }
               return 0;
          }
          void bit_and()
          {
               get__input();
               printf("AND RESULT : %d \n", a & b);
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

               void bit_and()
               {
                    get__input();
                    printf(CYAN "AND RESULT : %d\n" RESET, a & b);
               }

               void bit_or()
               {
                    get__input();
                    printf(CYAN "OR RESULT : %d\n" RESET, a | b); // fixed from ^ to |
               }

               void bit_not()
               {
                    get__input();
                    printf(MAGENTA "NOT RESULT: %d\n" RESET, ~a);
               }

               void bit_right_shift()
               {
                    get__input();
                    printf(YELLOW "RIGHT SHIFT RESULT: %d\n" RESET, a >> b);
               }

               void bit_left_shift()
               {
                    get__input();
                    printf(YELLOW "LEFT SHIFT RESULT: %d\n" RESET, a << b);
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

                         animate_text("  \n****************************************\n   ", 25000); // 50ms delay
                         animate_text("   WELCOME TO BITWISE CALCULATIONS   ", 70000);             // 50ms delay
                         animate_text("  \n****************************************\n   ", 25000); // 50ms delay

                         printf("\nOPTION:\n");
                         printf("1) " CYAN "AND" RESET "\n");
                         printf("2) " CYAN "OR" RESET "\n");
                         printf("3) " MAGENTA "NOT" RESET "\n");
                         printf("4) " YELLOW "RIGHT SHIFT" RESET "\n");
                         printf("5) " YELLOW "LEFT SHIFT" RESET "\n");

                         printf("\nENTER YOUR OPTION: ");
                         scanf("%d", &optional);

                         switch (optional)
                         {
                         case 1:
                              bit_and();
                              break;
                         case 2:
                              bit_or();
                              break;
                         case 3:
                              bit_not();
                              break;
                         case 4:
                              bit_right_shift();
                              break;
                         case 5:
                              bit_left_shift();
                              break;
                         default:
                              printf(RED "ENTER VALID OPTION\n" RESET);
                         }
                         return 0;
                    }
