#include <stdio.h>
#include <time.h>
void addition(int *x, int *y, int *add)
{
     *add = *x + *y;
}
int main()
{
     clock_t st, end;
     double use;
     int a = 5, b = 5, add;
     st = clock();
     addition(&a, &b, &add);
     end = clock();
     use = ((double)(end - st)) / CLOCKS_PER_SEC;
     printf("Execution time: %.5f seconds\n", use);
}