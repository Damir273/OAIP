#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("Imput numers\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a == b, b == c)
	{
		printf("equilateral triangle\n");
	}
	else
	{
		printf("equilateral are not triangle\n");
	}
	return 0;
}