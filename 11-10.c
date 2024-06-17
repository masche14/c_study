#include <stdio.h>

void main()
{
	FILE *wfp;

	wfp = fopen("c:\\c_study\\gugu.txt", "w");

	int dan = 2;

	for (int i=dan; i<=9; i++)
	{
		fprintf(wfp, " #Á¦%d´Ü# ", i);
	}
	fprintf(wfp, "\n\n");


	for (int i=1; i<=9; i++)
	{
		for (int j=dan; j<=9; j++)
		{ 
			int c = j*i;
			fprintf(wfp, "%2dX%2d=%2d", j, i, c);
		}
		fprintf(wfp, "\n");
	}
	fclose(wfp);
}

