
#include <stdio.h>

int main()
{
    int blanks = 0, tabs = 0, newlines = 0;
    char c;

    printf("Enter text (press Ctrl+d to end):\n");

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            blanks++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    }

    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return 0;
}
