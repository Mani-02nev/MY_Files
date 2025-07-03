#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0, sum = 0, div = 0, mod = 0, i = 0, byte = 0;
    int result[32] = {0}; // declared array to store binary values

    printf("Enter your number: \n");
    scanf("%d", &num);
    div = num;
    if (div < 256)
        byte = 7;
    else if (div < 65536)
        byte = 15;
    else if (div < 16777216)
        byte = 23;

    do
    {
        // printf("num:%d",num);
        mod = div % 2;
        div = div / 2;
        printf("%d ", mod);
        result[i++] = mod;
        // printf("\n---\n");

    } while (div != 1);

    printf("%d \n", div);
    result[i] = div;
    //  printf("Binary Value of %d :\n",num);
    for (int i = byte * 12; i >= 0; i--)
        printf("-");
    printf("\n|    ");

    for (int i = byte; i >= 0; i--)
    {
        printf("%d     |    ", result[i]);
    }
    printf("\n");

    for (int i = byte * 12; i >= 0; i--)
        printf("-");
    printf("\n");

    double index = pow(2, byte);
    for (int i = byte; i >= 0; i--)
    {
        printf("%d\t", (int)index);
        index = index / 2;
    }
    printf("\n");
    for (int i = byte; i >= 0; i--)
        printf("2^%d\t", i);

    printf("\n");

    return 0;
}

// 50100430665551