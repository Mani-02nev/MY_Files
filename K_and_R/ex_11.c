#include <stdio.h>

int main()
{
    int blanks = 0;
    char c;

    printf("Enter text (press Ctrl+d to end):\n");

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            blanks++;
        else if (c == '\t')
            blanks++;
        else if (c == '\n')
            blanks++;
    }

    printf("\nNumber Of words:%d\n", blanks);
    

    return 0;
}
