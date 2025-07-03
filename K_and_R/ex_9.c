
#include <stdio.h>

int main()
{
    char chare;
    char pre_Chare;
    printf("Enter Some Text(Press Enter And Go TO Back In Press ctrl+D):-\n");
    while ((chare = getchar()) != EOF){
    if (chare != ' ' || pre_Chare != ' ')
     {
        putchar(chare);
        pre_Chare=chare;
     }
    }

    printf("\n");
    return 0;
}