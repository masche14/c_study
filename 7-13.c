#include <stdio.h>

void main()
{
	int a, b, c, x;
	printf("�հ��� ���۰� ==> ");
	scanf("%d", &a);
	printf("�հ��� ���� ==> ");
	scanf("%d", &b);
	printf("��� ==> ");
	scanf("%d", &c);

	x=0;
	int i=a;

	while (i<=b) {
		if(i%c==0){
			x+=i;
		}
		i++;
	}

	printf("%d���� %d���� %d����� �հ� ==> %d \n", a, b, c, x);
}

