#include <stdio.h>
int main()
{
	int a , b , c;
	printf("Imput numbers\n");
	scanf_s("%d,%d,%d", &a, &b, &c);
	if ((a == b) && (b == c) && (a == c))
	{
		printf("the triangle is equilateral\n");
		printf("voshlo v 1 if\n");
	}
	else if ((a != b) && (b != c) && (a != c))
	printf("the triangle is not equilateral\n");
	else 
		printf("the triangle is not equilateral\n");
	return 0;
}