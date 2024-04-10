#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, b, c;
	printf("범위를 정해주세요. ==> ");
	scanf("%d", &c);
	srand(time(0));
	a = rand() % c + 1;

	for (int i=1; i<=11; i++) {
		if (i<11){
			printf("숫자를 입력하세요.(%d 이하의 양수) ==> ", c);
			scanf("%d", &b);

			if (a==b) {
				printf("정답입니다.");
				break;
			}
			else if (a>b) {
				printf("up \n");
			} else {
				printf("down \n");
			}
		}else {
			printf("아쉽게도 정답을 맞추지 못 하셨습니다. 정답은 %d 입니다. \n", a);
		}
	}
}
