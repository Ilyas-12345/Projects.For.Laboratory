#include <stdio.h>
#include <stdlib.h>
#include "arrays.h" 

int main()
{

	int** array;
	int i, j, rows, columns, count = 0;
	check_array(&rows);
	check1_array(&columns);
	array = (int**)malloc(rows * sizeof(int*));
	input_array(&array, rows, columns);
	output_array(&array, rows, columns);
	printf("new mass:\n");
	array_shift(&array, rows, columns);
	output_newarray(&array, rows, columns);
	return 0;
}