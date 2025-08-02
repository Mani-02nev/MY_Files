#include <stdio.h>
#include <string.h>
int main()
{
     FILE *fp;
     FILE *fp1;
     char ch[50];
     long ts, ts1;
     int i = 0;
     fp = fopen("demo.txt", "r");
     fp1 = fopen("demo1.txt", "w");
     while (fgets(ch, sizeof(ch), fp))
     {
          printf("%s", ch);
          fputs(ch, fp1);
          i++;
          if (sizeof(ch) == i)
          {
               break;
          }
     }
     fclose(fp1);
     fclose(fp);
     printf(" Total file size     : %ld bytes\n", ts);
     printf(" Total file size     : %ld bytes\n", ts1);
}