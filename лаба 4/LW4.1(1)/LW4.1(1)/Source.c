#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
void swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
void del_even(int* from, int total, int index)
{
	int i = 0;
	if ((total - index - 1) > 0) {
		memmove(from + i, from + i + 1, sizeof(int) * (total - index - 1));
	}
	return total - 1;
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int userchoice, col, row, harakteristika[100], noswap, array[100][100], arrayrand[100][100];
	printf("Input 1 for manual or 0 for random\n");
	scanf_s("%d", &userchoice);
	/*while (scanf_s("%d", &userchoice) != 1 || putchar(userchoice) != '/n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}*/
	printf("Input col and row for array\n");
	scanf_s("%d%d", &col, &row);
	/*while (scanf_s("%d%d", &col, &row) != 2 || getchar() != '/n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}*/
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
		for (int i = 0; i < col; i++)
		{

			for (int j = 0; j < row; j++)
			{

				if (arrayrand[i][j] > 0)
				{
					del_even;
				}
			}
		}
		for (int i = 0; i < col; i++)
		{
			harakteristika[i] = 0;
			for (int j = 0; j < row; j++)
			{
				if (arrayrand[i][j] < 0)
				{
					if (arrayrand[i][j] % 2 == 0)
					{
						harakteristika[i] += arrayrand[i][j];
					}
				}
			}
		}
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				printf("\t%d", arrayrand[i][j]);
			}
			printf("\n");
		}
	}
	if (userchoice == 1)
	{

	}
	return 0;
}