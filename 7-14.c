#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, b, c;
	printf("������ �����ּ���. ==> ");
	scanf("%d", &c);
	srand(time(0));
	a = rand() % c + 1;

	for (int i=1; i<=11; i++) {
		if (i<11){
			printf("���ڸ� �Է��ϼ���.(%d ������ ���) ==> ", c);
			scanf("%d", &b);

			if (a==b) {
				printf("�����Դϴ�.");
				break;
			}
			else if (a>b) {
				printf("up \n");
			} else {
				printf("down \n");
			}
		}else {
			printf("�ƽ��Ե� ������ ������ �� �ϼ̽��ϴ�. ������ %d �Դϴ�. \n", a);
		}
	}
}
