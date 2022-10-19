#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
int main()
{
	
	int userchoice, col, row, array[100][100], arrayrand[100][100];
	printf("Input 1 for manual or 0 for random\n");
	while (scanf_s("%d", &userchoice) != 1 || userchoice > 1 || userchoice < 0 || getchar() != '\n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}
	printf("Input col and row for massive\n");
	while (scanf_s("%d%d", &col, &row) != 2 || col > 100 || col < 0 || row>100 || row < 0 || getchar() != '\n')
	{
		printf("error, try again");
		rewind(stdin);
	}
	if (userchoice == 0)
	{
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				arrayrand[i][j] = rand() % 201 - 100;
				printf("\t%d", arrayrand[i][j]);
			}
			printf("\n");
		}
		int p = 0;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				if (arrayrand[i][j] < 0)
				{
					arrayrand[i][j] = arrayrand[p][j];
				}
			}
		}
		for (int p = 0; p < col; p++)
		{
			for (int j = 0; j < row; j++)
			{
				arrayrand[p][j] *= -1;
				printf("\t%d", arrayrand[p][j]);
			}
			printf("\n");
		}
	}
	if (userchoice == 1)
	{
		for (int i = 0; i < userchoice; i++)
		{
			printf("input %d element in array\n", i + 1);
			while (scanf_s("%f", &array[i]) != 1)
			{
				printf("Error, try again\n");
				rewind(stdin);
			}
		}
		int p = 0;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				if (array[i][j] < 0)
				{
					array[i][j] = array[p][j];
				}
			}
		}
		for (int p = 0; p < col; p++)
		{
			for (int j = 0; j < row; j++)
			{
				array[p][j] *= -1;
				printf("\t%d", array[p][j]);
			}
			printf("\n");
		}
	}
	return 0;
}