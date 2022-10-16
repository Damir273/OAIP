#include<stdio.h>
int main()
{
	int choice, array[100], arrayrand[100], c, crand;
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
		while (scanf_s("%d", &array[i]) != 1)
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
	}
	int min = array[1];
	for (int i = 0; i < choice; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	printf("%d\n", min);
	for (int i = 0; i < choice; i++)
	{
		arrayrand[i] = 0 + rand();
	}
	int minrand = arrayrand[1];
	for (int i = 0; i < choice; i++)
	{
		if (arrayrand[i] < minrand)
		{
			minrand = arrayrand[i];
		}
	}
	printf("%d", minrand);
	return 0;
}