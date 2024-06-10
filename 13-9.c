#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};

	int cnt;

	printf("입력할 학생 수 : ");
	scanf("%d",&cnt);

	struct student *p = (struct student*) malloc(sizeof(struct student)*cnt);

	for (int i=0; i<cnt; i++){
		printf("이름과 나이 입력 : ");
		scanf("%s %d", (p+i)->name, &(p+i)->age);
	}

	printf("\n\n");

	printf("--  학생 명단 --\n");

	for (int i=0; i<cnt; i++){
		printf("이름 : %s , 나이 : %d\n", (p+i)->name, (p+i)->age);
	}
	
	free(p);
		

}
