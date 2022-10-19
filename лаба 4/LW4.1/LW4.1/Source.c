#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
int main()
{
	srand(time(NULL));
	int userchoice, array[100][100], arrayrand[100][100], col, row, arrayhar[100], arrayrandhar[100];
	printf("Input 1 for manual or 0 for random\n");
	while (scanf_s("%d", &userchoice) != 1 || userchoice > 1 || userchoice < 0 || getchar() != '\n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}
	printf("Input col and row for array\n");
	while (scanf_s("%d%d", &col, &row) != 2 || col > 100 || col < 0 || row>100 || row < 0 || getchar() != '\n')
	{
		printf("Error, try again\n");
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
		int p = 0;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				if (arrayrand[i][j] < 0)
				{
					if (arrayrand[i][j] % 2 == 0)
					{
						arrayrandhar[p] = arrayrand[i][j];
						p++;
					}
				}
			}
		}
		int k;
		for (int i = 1; i < p; i++)
		{
			k = i;
			while (k - 1 >= 0 && arrayrandhar[p - 1] < arrayrandhar[p])
			{
				int dp = arrayrandhar[p];
				arrayrandhar[p] = arrayrandhar[p - 1];
				arrayrandhar[p - 1] = dp;
				k--;
			}
		}
		for (int i = 0; i < p; i++)
		{
			printf("\t%d", arrayrandhar[i]);
			;
		}
	}
	if (userchoice == 1)
	{
		for (int i = 0; i < userchoice; i++)
		{
			printf("input %d element in array\n", i + 1);
			while (scanf_s("%d", &array[i]) != 1)
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
					if (array[i][j] % 2 == 0)
					{
						arrayhar[p] = array[i][j];
						p++;
					}
				}
			}
		}
		int k;
		for (int i = 1; i < p; i++)
		{
			k = i;
			while (k - 1 >= 0 && arrayhar[p - 1] < arrayhar[p])
			{
				int dp = arrayhar[p];
				arrayhar[p] = arrayhar[p - 1];
				arrayhar[p - 1] = dp;
				k--;
			}
		}
		for (int i = 0; i < p; i++)
		{
			printf("\t%d", arrayhar[i]);
			printf("\n");
		}
	}
	return 0;
}