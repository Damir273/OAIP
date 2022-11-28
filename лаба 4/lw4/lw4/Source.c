#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int task;
	printf("Enter number of task:\n");
	while (scanf_s("%d", &task) != 1 || task < 0 || task>3 || getchar() != '\n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}
	if (task == 1)
	{
		int arr[100][100], col, row, k, a, arr1[100];
		printf("Enter 1 for manual of 0 for random:\n");
		while (scanf_s("%d", &k) != 1 | k < 0 || k>1 || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
		printf("Enter col and row for matrix:\n");
		while (scnaf_s("%d%d", &row, &col) != 2 || row > 100 || col > 100 || row < 0 || col < 0 || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
		if (k == 0)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					arr[i][j] = rand() % 11 - 10;
					printf("\t%d", arr[i][j]);
				}
			}
			printf("\n");
			int n = 0;
			for (int j = 0; j < col; j++)
			{
				for (int i = 0; i < row; i++)
				{
					if (arr[i][j] % 2 == 0 && arr[i][j] < 0)
					{
						arr1[n] = arr[i][j];
						n++;
					}
				}
			}
			int l;
			for (int i = 1; i < n; i++)
			{
				l = i;
				while (l - 1 >= 0 && arr1[n - 1] < arr1[n])
					{
					int dp = arr1[n];
					arr1[n] = arr1[n - 1];
					arr1[n - 1] = dp;
					l--;
					}
			}
			for (int i = 0; i < n; i++)
			{
				printf("\t%d", arr1[i]);
			}
			printf("\n");
		}
		if (k == 1)
		{

		}
	}
	if (task == 2)
	{
		int userchoice, col, row, array[40][40], arrayrand[40][40];
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
			for (int i = 0; i < col; i++)
			{
				for (int j = 0; j < row; j++)
				{

					printf("input %d %d element in array\n", i + 1, j + 1);
					while (scanf_s("%d", &array[i][j]) != 1)
					{
						printf("Error, try again\n");
						rewind(stdin);
					}
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
	}
	if (task == 3)
	{
		int userchoice, array[100][100], arrayrand[100][100], col, row, sum = 0, sumrand = 0;
		printf("Input 1 for manual or 0 for random\n");
		while (scanf_s("%d", &userchoice) != 1 || userchoice > 1 || userchoice < 0 || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
		printf("Input col and row for massive\n");
		while (scanf_s("%d%d", &col, &row) != 2 || col != row || col > 100 || col < 0 || row>100 || row < 0 || getchar() != '\n')
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
	}
	return 0;
}