#include<stdio.h>
int main()
{
	int choice, array[100], arrayrand[100], chislo1, chislo2, currentcounter = 0, biggestcounter = 0, currentcounter1 = 0, biggestcounter1 = 0;
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
	for (int i = 0; i < choice; i++)
	{
		if (array[i] % 2 == 0)
		{
			for (int j = 0; j < choice; j++)
			{
				if (array[i] == array[j])
				{
					currentcounter++;
				}
				if (currentcounter > biggestcounter)
				{
					biggestcounter = currentcounter;
					currentcounter = 0;
				}
			}
		}
	}
	printf("%d\n", biggestcounter);
	for (int i = 0; i < choice; i++)
	{
		arrayrand[i] = rand() - rand();
	}
	for (int i = 0; i < choice; i++)
	{
		if (arrayrand[i] % 2 == 0)
		{
			for (int j = 0; j < choice; j++)
			{
				if (arrayrand[i] = arrayrand[j])
				{
					currentcounter1++;
				}
				
			}
		}
	}
	if (currentcounter1 > biggestcounter1)
	{
		biggestcounter1 = currentcounter1;
	}
	currentcounter1 = 0;
	printf("%d", biggestcounter1);
	return 0;
}