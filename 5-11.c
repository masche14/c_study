#include <stdio.h>
void main()
{
	int a, b, p;

	char x;

	

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d",&a,&x,&b);
	
	switch(x)
	{

		case '+' : p = a+b;
			   printf("%d  %c  %d  =  %d", a, x, b, p); break;
		case '-' : p = a-b;
			   printf("%d  %c  %d  =  %d", a, x, b, p); break;
		case '*' : p = a*b;
			   printf("%d  %c  %d  =  %d", a, x, b, p); break;
		case '/' : p = a/b;
			   printf("%d  %c  %d  =  %d", a, x, b, p); break;
		case '%' : p = a%b;
			   printf("%d  %c  %d  =  %d", a, x, b, p); break;
		default : printf("연산자를 잘못 입력했습니다."); break;
	}	
}
