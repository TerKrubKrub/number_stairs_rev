#include<stdio.h>
int main()
{
	int x[11];
	int i, n, j, k;
	scanf_s("%d", &n);
	for (i = n; i > 0; i--)
	{
		scanf_s("%d", &x[i]);
	}
	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <= i + 1; j++)
		{
			printf("%d", x[i]);
		}
		printf("\n");
	}
	return 0;
}