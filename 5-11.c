#include <stdio.h>
void main()
{
	int a, b, p;

	char x;

	

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
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
		default : printf("�����ڸ� �߸� �Է��߽��ϴ�."); break;
	}	
}
