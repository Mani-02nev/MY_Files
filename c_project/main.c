#include <stdio.h>
#include <unistd.h> // for getopt()

// Declare the functions from other C files
void run_one();
void run_second();
void run_third();

int main(int argc, char *argv[])
{
     int opt = getopt(argc, argv, "hsb");

     if (argc < 2)
     {
          printf("Usage: %s [-h | -s | -b]\n", argv[0]);
          return 1;
     }

     if ((opt) != -1)
     {
          switch (opt)
          {
          case 'h':
               run_one();
               break;
          case 's':
               run_second();
               break;
          case 'b':
               run_third();
               break;
          default:
               printf("Usage: %s [-h | -s | -b]\n", argv[0]);
               return 1;
          }
     }

     return 0;
}
