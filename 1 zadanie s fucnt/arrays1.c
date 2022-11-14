#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
int main()
{
	int size;
	int* array;
	printf("size = ");
	scanf_s("%d", &size);
	array = (int*)malloc(size * sizeof(int));
	input_array(&array, size);
	output_array(&array, size);
	printf("\n");
	counts(&array,&size);
	output_array(&array, size);
	free(array);
	return 0;
}