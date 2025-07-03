#include <stdio.h>
#include <string.h>
int main(){
    int i=0 ,blanks = 0, tabs = 0, newlines = 0;
    char c,str[100];
     printf("Enter text (press Ctrl+d to end):\n");

    while ((c= getchar()) != EOF)
    {
        strcat(str[i],c);
        i++;
    }
    
}
void count(char c){

}