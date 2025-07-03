#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    char myString[50];
    fgets(myString, 50, fptr);
    printf("%s", myString);
    fclose(fptr);
    return 0;
}