#include <stdio.h>
#include<string.h>
#define LENGTH 1000 

int main() {
    char line[LENGTH];
    printf("Enter lines of text. Press Ctrl+D  to end:\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strlen(line) > 80) {
            printf("%s\n\n", line);
        }
    }

    return 0;
}
