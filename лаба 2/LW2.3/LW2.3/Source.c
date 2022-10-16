#include<stdio.h>
int main()
{
	int a1 = 1, a2 = 1, N, b;
	printf("Input number\n");
	while (scanf_s("%d", &N) != 1 && N <= 1 && getchar() != '/n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}
	for (int i = 3; i <= N; i++)
	{
		b = a1 + a2;
		a1 = a2;
		a2 = b;
	}
	printf("%d", b);
	return 0;
}