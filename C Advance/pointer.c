#include <stdio.h>
int main()
{
    int a = 5;
    int *p; // pointer declaration
    p = &a; // pointer initialaction
    int b = 5;
    int *n;                                    // pointer declaration
    n = &a;                                    // pointer initialaction
    printf(" Addres of a  : %p \n", &a);       // print to addres of a using &
    printf(" value of a   : %d \n", *p);       // value of a using a pointer variable
    printf(" Addres of a  : %p \n", p);        // print a addres of a using a pointe
    printf(" Addres of *p : %p \n", &*p);      // it is equalent to addres of a
    printf(" Addres of pointer  : %p \n", &p); //
}