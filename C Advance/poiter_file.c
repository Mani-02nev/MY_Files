#include <stdio.h>
#include <string.h>
int main()
{
     FILE *fp;
     char st[50];
     fp = fopen("demo.txt", "r");
     fgets(st, 50, fp);
     printf("%s\n", st);
     fclose(fp);
}