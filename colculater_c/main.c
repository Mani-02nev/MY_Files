#include <stdio.h>
#include <unistd.h>
#include "arithmetic.h"
#include "bitwise.h"
#include "other.h"
#include "global.h"

void usage()
{
     printf("*****Usage: ./cal [-h] [-a] [-b]*****\n");
     printf("  -h : Show help\n");
     printf("  -a : Arithmetic operations\n");
     printf("  -b : Bitwise operations\n");
     printf("  -o : Other operations\n");
}
void start()
{

     printf("OPTIONS:\n1)Arithmetic operations\n2)Bitwise operations\n3)Other operations\n");
     printf("\n================================\n");
     printf("\nENTER YOUR OPTION:");
     scanf("%d", &optional);
     switch (optional)
     {
     case 1:
          arith_op();
          break;
     case 2:
          bit_op();
          break;
     case 3:
          other_op();
          break;

     default:
          printf("ENTER VALID OPTIONS ONLY\n");
          break;
     }
}

int handle_option(int argc, char *argv[])
{
     int opt;
     optional = 0;
     opt = getopt(argc, argv, "habo");

     if (opt != -1)
     {
          switch (opt)
          {
          case 'h':
               usage();
               break;
          case 'a':
               optional = 1;
               break;
          case 'b':
               optional = 2;
               break;
          case 'o':
               optional = 3;
               break;
          default:
               usage();
               break;
          }
     }

     return optional;
}

int main(int argc, char *argv[])
{
     optional = handle_option(argc, argv);

     switch (optional)
     {
     case 0:
          usage();
          start();
          break;
     case 1:
          arith_op();
          break;
     case 2:
          bit_op();
          break;
     case 3:
          other_op();
          break;
     default:
          break;
     }

     return 0;
}
