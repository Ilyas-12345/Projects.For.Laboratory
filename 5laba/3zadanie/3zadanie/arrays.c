#include "arrays.h"

void check_array(int* rows_1)
{
	printf("Enter the rows \n");
	while (scanf_s("%d", rows_1) == 0 || *rows_1 < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}
void check1_array(int* columns_1)
{
	printf("Enter the columns \n");
	while (scanf_s("%d", columns_1) == 0 || *columns_1 < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}
void memory_allocate(int*** array_1, int rows_1, int columns_1)
{
	*array_1= (int**)malloc(rows_1 * sizeof(int*));
	for (int i = 0; i < rows_1; i++)
	{
		(*array_1)[i] = (int*)malloc(columns_1 * sizeof(int));
	}
}
void input_array(int*** array_1, int rows_1, int columns_1)
{
	for (int i = 0; i < rows_1; i++)
	{
		for (int j = 0; j < columns_1; j++)
		{
			printf("array[%d][%d]=", i, j);
			scanf_s("%d", &(*array_1)[i][j]);
		}
	}
}
void output_array(int*** array_1, int rows_1, int columns_1)
{
	for (int i = 0; i < rows_1; i++)
	{
		for (int j = 0; j < columns_1; j++)
			printf("%d\t", (*array_1)[i][j]);
		printf("\n");
	}
}
void array_shift(int*** array_1, int rows_1, int columns_1)
{
	int temp;
	for (int i = 0; i < columns_1; i++)
	{
		temp = (*array_1)[rows_1 - 1][i];
		for (int j = rows_1 - 1; j > 0; j--)
		{
			(*array_1)[j][i] = (*array_1)[j - 1][i];
		}
		(*array_1)[0][i] = temp;
	}
}
void free_array(int*** array_1,int rows_1)
{
	for (int i = 0; i < rows_1; i++)
	{
		free((*array_1)[i]);
	}
	free(*array_1);
}

