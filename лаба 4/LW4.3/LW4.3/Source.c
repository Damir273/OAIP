#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
int main()
{
	srand(time(NULL));
	int userchoice, array[100][100], arrayrand[100][100], col, row, sum = 0, sumrand = 0;
	printf("Input 1 for manual or 0 for random\n");
	while (scanf_s("%d", &userchoice) != 1 || userchoice > 1 || userchoice < 0 || getchar() != '\n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}
	printf("Input col and row for massive\n");
	while (scanf_s("%d%d", &col, &row) != 2 || col > 100 || col < 0 || row>100 || row < 0 || getchar() != '\n')
	{
		printf("error, try again\n");
		rewind(stdin);
	}
	if (userchoice == 0)
	{
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				arrayrand[i][j] = rand() % 11 - 10;
				printf("\t%d", arrayrand[i][j]);
			}
			printf("\n");
		}
		for (int j = 0; j < row / 2; j++)
		{
			for (int i = col / 2; i < col; i++)
			{
				sumrand += arrayrand[i][j];
			}
		}
		printf("%d\n", sumrand);
	}
	if (userchoice == 1)
	{
		for (int i = 0; i < userchoice; i++)
		{
			printf("input %d element in array\n", i + 1);
			while (scanf_s("%d", &array[i]) != 1 || getchar() != '\n')
			{
				printf("Error, try again\n");
				rewind(stdin);
			}
		}
		for (int i = 0; i <= col / 2; i++)
		{
			for (int j = row / 2; j <= row; j++)
			{
				sum += array[i][j];
			}
		}
		printf("%d", sum);
	}
	return 0;
}