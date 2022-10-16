#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Imput numbers\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (b == (a + c) / 2)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}