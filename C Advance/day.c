#include <stdio.h>
// #include<coio.h>

int main()
{
     int day;

     // Get input
     printf("Enter day number (1 to 7): ");
     scanf("%d", &day);

     // Switch to find day name
     switch (day)
     {
     case 1:
          printf("Sunday\n");
          break;
     case 2:
          printf("Monday\n");
          break;
     case 3:
          printf("Tuesday\n");
          break;
     case 4:
          printf("Wednesday\n");
          break;
     case 5:
          printf("Thursday\n");
          break;
     case 6:
          printf("Friday\n");
          break;
     case 7:
          printf("Saturday\n");
          break;
     default:
          printf("Invalid input! Please enter 1 to 7.\n");
     }
     //     getch();
     //     clrscr();
}
