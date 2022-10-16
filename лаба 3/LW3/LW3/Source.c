#include<stdio.h>
int main()
{
	int  A, B, sum1 = 0, summax = 0, sum3 = 0, summaxrand = 0, choice = 0;
	float array[100], arrayrand[100];
	printf("Imput the number of the elements");
	while (scanf_s("%d", &choice) != 1 && choice > 100 || getchar() != '\n')
	{
		for (int i = 0; i < choice; i++)
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
	}
	for (int i = 0; i < choice; i++)
	{
		printf("input %d element in array\n", i + 1);
		while (scanf_s("%f", &array[i]) != 1)
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
	}
	printf("Imput diapazon from A to B\n");
	scanf_s("%d%d", &A, &B);
		/*while (scanf_s("%d%d", &A, &B) != 1 && B < choice && getchar() != 1);
		{
			for (int i = 0; i < A; i++)
			{
				printf("Error, try again\n");
				rewind(stdin);
				for (int i = 0; i < B + 1; i++)
				{
					printf("Error, try again\n");
					rewind(stdin);
				}
			}
		}*/
	for (int i = A - 1; i < B; i++)
	{
		sum1 += array[i];
	}
	printf("%d\n", sum1);
	for (int i = B + 1; i < choice; i++)
	{
		summax += array[i];
	}
	printf("%d \n", summax);
	for (int i = 0; i < choice; i++)
	{
		arrayrand[i] = 0 + rand();
	}
	for (int i = A - 1; i < B; i++)
	{
		sum3 += array[i];
	}
	printf("%d\n", sum3);
	for (int i = B + 1; i < choice; i++)
	{
		summaxrand += arrayrand[i];
	}
	printf("%d\n", summaxrand);
	return 0;
}