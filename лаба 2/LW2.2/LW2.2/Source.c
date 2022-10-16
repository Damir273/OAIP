#include<stdio.h>
int main()
{
	int m, n;
	float c = 0;
	printf("Imput numbers\n");
	while (scanf_s("%d%d", &n, &m) != 1 && m > n && getchar() != '\n')
	{
		printf("Error, try again");
		rewind(stdin);
	}
	for (int i = 0; i <= n; i++)
	{
		c = c + 1 / (m + i);
		c++;
	}
	printf("%f", c);
	return 0;
}