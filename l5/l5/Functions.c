#include<stdio.h>
#include<stdlib.h>
#include"Header.h"
#include<time.h>

void proverka(int* task)
{
	printf("Enter rhe number of the task:\n");
	while (scanf_s("%d", &task) != 1 || *task > 3 || *task < 0 || getchar() != '\n')
	{
		printf("Error, try again");
		rewind(stdin);
	}
}

int** memory_allocation(int row, int col) 
{
	int** arr = (int**)malloc(row * sizeof(int**));
	for (int i = 0; i < row; i++)
	{
		arr[i] = (int*)calloc(col, sizeof(int));
	}
	return arr;
}

void proverka_len(int len)
{
	printf("Enter len of the array:\n");
	while (scanf_s("%d", &len) != 1 || len < 0 || len>10 || getchar != '\n')
	{
		printf("Error, try again");
		rewind(stdin);
	}
}

int input_len(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("Enter element %d:\n", i + 1);
		while (scanf_s("%d", &arr[i]) != 1 || getchar() != '\n') {
			printf("Error, try again\n");
			rewind(stdin);
		}
	}
	return len;
}

void print_array(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n");
}

void delete_element(int* arr, int* len, int index) {
	for (int i = 0; i <*len; i++) {
		if (((i + 1) % index) == 0) {
			for (int n = i; n < *len; n++) {
				arr[n] = arr[n + 1];
			}
			(*len)--;
			i--;
			
		}
	}
}

void theendresult_array(int* arr, int len) {
	printf("the end result array:\n");
	for (int i = 0; i < len; i++) {
		printf("\t%d", arr[i]);
	}
	printf("\n");
}

void input_matrix(int** arr, int row, int col) {
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 11 - 10;
			}
		}
	}

void print_matrix(int** arr, int row, int col) {
	printf("initial matrix:\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}
}

void delete_col(int** arr, int row, int* col, int index) {
	for (int i = row; i >= 0; i--) {
		for (int j = *col; j >= 0; j--) {
			int n;
			if (((j + 1) % index)!=0) {
				for (n = j; n < *col; n++) {
					if (!i) {
						(*col)--;
						arr[i][n] = arr[i][n + 1];
					}
				}
			}
		}
	}
}

void theendresult_matrix(int** arr, int row, int col) {
	printf("The end result matrix:\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("\t %d", arr[i][j]);
		}
		printf("\n");
	}
}