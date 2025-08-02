#include <stdio.h>
#include <string.h>
int main()
{
     union st
     {
          char Name[20];
          int age;
          float Mark;
     };
     union st s1;
     s1.Mark = 98.0;
     printf("Mark:%f\n", s1.Mark);
     s1.age = 18;
     printf("Age:%d\n", s1.age);
     strcpy(s1.Name, "MANI");
     printf("Name:%s\n", s1.Name);
}