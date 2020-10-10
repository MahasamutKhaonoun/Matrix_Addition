#include <stdio.h>

long sum(long a, long b);

int main()
{
	long  mn[2], mn1[100][100], mn2[100][100], mn3[100][100];
	long  * n = mn;
	for (long i = 0; i < 2; i++)
	{
		if (scanf_s("%ld", &mn[i]) != 1)
		{
			printf("Error");
			return 1;
		}
		else if (mn[i] < 1 || mn[i] > 100)
		{
			printf("Error");
			return 1;
		}
	}
	for (long j = 0; j < *n; j++)
	{
		for (long k = 0; k < *(n + 1); k++)
		{
			if (scanf_s("%ld", &mn1[j][k]) != 1)
			{
				printf("Error");
				return 1;
			}
			else if (mn1[j][k] < -2000000000 || mn1[j][k] > 20000000000)
			{
				printf("Error");
				return 1;
			}
		}
	}
	for (long j = 0; j < *n; j++)
	{
		for (long k = 0; k < *(n + 1); k++)
		{
			if (scanf_s("%ld", &mn2[j][k]) != 1)
			{
				printf("Error");
				return 1;
			}
			else if (mn2[j][k] < -2000000000 || mn2[j][k] > 20000000000)
			{
				printf("Error");
				return 1;
			}
		}
	}
	for (long j = 0; j < *n; j++)
	{
		for (long k = 0; k < *(n + 1); k++)
		{
			mn3[j][k] = sum(mn1[j][k], mn2[j][k]);
		}
	}
	printf("\n");
	for (long j = 0; j < *n; j++)
	{
		for (long k = 0; k < *(n + 1); k++)
		{
			printf("%ld ", mn3[j][k]);
		}
		printf("\n");
	}
	return 0;
}

long sum(long a, long b)
{
	long result;
	if ((a > -2000000000 && a < 2000000000)&& (b > -2000000000 && b < 2000000000))
	{
		result = a + b;
		return result;
	}
}