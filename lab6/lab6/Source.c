#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main()
{
	int task;
	printf("Enter number of task would you wont to see:\n");
	while (scanf_S("%d", &task) != 1 || task < 0 || task > 2 || getchar() != '\n')
	{
		printf("Error, try again\n");
		rewind(stdin);
	}

	if (task == 1)
	{
		printf("First task:\n В одномерном массиве выполнить сортировку нечетных элементов методом слияния.\n");
		int* arr, len = 10;
		arr = (int*)malloc(len * sizeof(int));
		printf("Enter len of array:\n");
		while (scanf_s("%d", &len) != 1 || len < 0 || getchar() != '\n')
		{
			printf("Error, try again");
			rewind(stdin);
		}
		input_len(*arr, len);
		sort_1(*arr, len);
		result_len(*arr, len);
	}

	if (task == 2)
	{
		printf("Second task:\n В матрице размером NxM выполнить сортировку нечетных строк по убыванию суммы элементов.\n");
		int **arr, row = 10, col = 10;
		memory_allocation(row, col);
		printf("Enter col and row for matrix:\n");
		while (scanf_s("%d%d", &row, &col) != 2 || row < 0 || row>10 || col < 0 || col>10 || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewiind(stdin);
		}
		memory_allocation(row, col);

	}

	return 0;
}