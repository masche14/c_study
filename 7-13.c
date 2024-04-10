#include <stdio.h>

void main()
{
	int a, b, c, x;
	printf("합계의 시작값 ==> ");
	scanf("%d", &a);
	printf("합계의 끝값 ==> ");
	scanf("%d", &b);
	printf("배수 ==> ");
	scanf("%d", &c);

	x=0;
	int i=a;

	while (i<=b) {
		if(i%c==0){
			x+=i;
		}
		i++;
	}

	printf("%d부터 %d까지 %d배수의 합계 ==> %d \n", a, b, c, x);
}

