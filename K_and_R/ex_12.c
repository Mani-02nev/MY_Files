#include <stdio.h>

#define IN	1 /* inside a word */
#define OUT	0 /* outside a word */

main()
{
	char c ;
	short state ;

	state = OUT ;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			if (state == OUT)
				state = IN ;
			putchar(c) ;
		}
		else if (state == IN) {
			state = OUT ;
			putchar('\n') ;
		}
	}
}