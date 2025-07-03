#include <stdio.h>

int main()
{
    int num, i, j;
    printf("Enter A Number:");
    scanf("%d", &j);
    char alpha[27];
    for (int i = 0; i < 26; i++)
    {
        alpha[i] = 'A' + i;
    }
    alpha[26] = '\0';
    for (num = 'A'; num <= alpha[j - 1]; num++)
    {
        for (i = 'A'; i <= num; i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}
