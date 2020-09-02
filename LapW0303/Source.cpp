#include<stdio.h>
int main()
{
	int x, i, j;
	scanf_s("%d", &x);
	for (i = 1; i <= x - 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		for (j = 2 * i; j <= (x - 1) * 2; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (j = 1; j <= (x * 2) - 1; j++)
	{
		printf("* ");
	}
	printf("\n");
	for (i = 2; i <= x; i++)
	{
		for (j = i; j <= x; j++)
		{
			printf("* ");
		}
		for (j = 1; j <= 2 * i - 3; j++)
		{
			printf("  ");
		}
		for (j = i; j <= x; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}