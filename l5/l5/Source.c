#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Header.h"

int main()
{
	int *task;
	proverka(task);

	if (task == 1)
	{
		int len=0, index;
		printf("Enter the len of the array:\n");
		while (scanf_s("%d", &len) != 1 || len < 0 || len>10 || getchar() != '\n')
		{
			printf("Error, try again");
			rewind(stdin);
		}
		int* arr = (int*)malloc(len * sizeof(int));
		input_len(arr, len);
		print_array(arr, len);
		printf("Enter number for delete:\n");
		while (scanf_s("%d", &index) != 1 || index > len || index < 0 || getchar() != '\n') {
			printf("Error, try again");
			rewind(stdin);
		}
		delete_element(arr, &len, index);
		theendresult_array(arr, len);
	}

	if (task == 2)
	{
		int col, row, index;
		printf("Enter col and row for matrix:\n");
		while (scanf_s("%d%d", &row, &col) != 2 || row < 0 || col < 0 || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
		int** arr;
		arr = memory_allocation(row, col);
		input_matrix(arr, row, col);
		print_matrix(arr, row, col);
		printf("Enter index for delete col:\n");
		while (scanf_s("%d", &index) != 1 || index<0 || index>col || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
		delete_col(arr, row, &col, index);
		theendresult_matrix(arr, row, col);
	}

	if (task == 3)
	{

	}
	return 0;
}