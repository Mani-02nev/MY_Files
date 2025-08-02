#include <stdio.h>
#include <string.h>
int main()
{
     struct st
     {
          char Name[50];
          int age;
          float Mark;
     };
     struct st s1;
     struct st *ptr = &s1;
     strcpy(s1.Name, "MANI");
     s1.age = 18;
     s1.Mark = 98.9;

     printf("Name:%s\n", ptr->Name);
     printf("Age:%d\n", ptr->age);
     printf("Mark:%f\n", ptr->Mark);
}