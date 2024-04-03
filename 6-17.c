#include <stdio.h>

void main()
{
	int a, b;
	for (b=2; b<=9; b++) {
		printf(" #Á¦%d´Ü# ", b);
	}
	printf("\n");
	printf("\n");


	for (a=1; a<=9; a++){
		for (b=2; b<=9; b++){
			printf(" %dX %d=%2d ", b, a, b*a);
		} printf("\n");
	} 
}
