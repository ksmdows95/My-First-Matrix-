#include <stdio.h>

int main()
{
	int ksm[3][2][2];
	int i, j, k;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 2; k++)
			{
				ksm[i][j][k] = (i+1) + (j+1) + (k+1);
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("i = %d\n", i+1);
		printf("======\n");
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 2; k++)
			{
				printf("%2d ", ksm[i][j][k]);
			}
			printf("\n");
		}
		printf("======\n");
	}
}