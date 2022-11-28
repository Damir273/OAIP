#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

int input_len(int len, int* arr)
{
	for (int i = 0; i < len; i++)
	{
		printf("Enter len of array:\n",i);
		while (scanf_s("%d", &arr[i]) != 1 || getchar() != '\n')
		{
			printf("Error, try again\n");
			rewind(stdin);
		}
	}
	return len;
}

void sort_1(int* arr, int len)
{
	int mid = len / 2;
	if (len / 2 == 1)
	{
		mid++;
	}
	int h = 1;
	int* arr1 = (int*)malloc(len * sizeof(int));
	int step;
	while (h < len)
	{
		step = h;
		int i = 0;
		int j = mid;
		int k = 0;
		while (step <= mid)
		{
			while ((i < step) && (j < len) && (j < (mid + step)))
			{
				if (arr[i] < arr[j])
				{
					arr1[k] = arr[i];
					i++;
					k++;
				}
				else
				{
					arr1[k] = arr[j];
					j++;
					k++;
				}
			}
			while (i < step)
			{
				arr1[k] = arr[i];
				i++;
				k++;
			}
			while ((j < (mid + step)) && (j < len))
			{
				arr1[k] = arr[j];
				j++;
				k++;
			}
			step = step + h;
		}
		h = h * 2;
		for (i = 0; i < len; i++)
		{
			arr[i] = arr1[i];
		}
	}
}

void result_len(int* arr, int len)
{
	printf("arr before sort:\n");
	for (int i = 0; i < len; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n");
}

void memory_allocation( int row, int col)
{
	int** arr = (int**)malloc(row * sizeof(int**));
	for (int i = 0; i < row; i++)
	{
		arr[i] = (int*)calloc(col, sizeof(int));
	}
	return arr;
}