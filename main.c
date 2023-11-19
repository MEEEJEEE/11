#include <stdio.h>
#include <stdlib.h>
//실습2

void main(void){
	int i = 4; 
	
	int *pi = &i;
	char *pc = &i;
	printf("%i, %i, %i\n", i, *pi, *pc);

	return 0;
}

