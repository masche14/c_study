#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};

	int cnt;

	printf("�Է��� �л� �� : ");
	scanf("%d",&cnt);

	struct student *p = (struct student*) malloc(sizeof(struct student)*cnt);

	for (int i=0; i<cnt; i++){
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", (p+i)->name, &(p+i)->age);
	}

	printf("\n\n");

	printf("--  �л� ��� --\n");

	for (int i=0; i<cnt; i++){
		printf("�̸� : %s , ���� : %d\n", (p+i)->name, (p+i)->age);
	}
	
	free(p);
		

}
