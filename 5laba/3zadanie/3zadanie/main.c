#include <stdio.h>
#include <stdlib.h>
#include "arrays.h" 

int main()
{
	int** array;
	int i, j, rows, columns, count = 0;
	printf("Enter the rows \n");
	check_array(&rows);
	printf("Enter the columns \n");
	check_array(&columns);
	memory_allocate(&array, rows, columns);
	input_array(&array, rows, columns);
	output_array(&array, rows, columns);
	printf("new mass:\n");
	array_shift(&array, rows, columns);
	output_array(&array, rows, columns);
	free_array(&array, rows);
	return 0;
}