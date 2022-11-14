#include <stdio.h> 
#include <stdlib.h> 
#include "arrays.h"
int main()
{
    int** array;
    int min, i, j, count, rows, columns, mine = 0, k;
    printf("input rows=");
    scanf_s("%d", &rows);
    printf("input columns=");
    scanf_s("%d", &columns);
    array = (int**)malloc(rows * sizeof(int*));
	input_Array(array, rows, columns);
	output_array(array, rows, columns);
    printf("\n");
	search_min(array, rows, columns);
	output_newarray(array, rows);
}