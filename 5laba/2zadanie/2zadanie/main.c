#include <stdio.h> 
#include <stdlib.h> 
#include "arrays.h"
int main()
{
    int** array;
    int rows;
    input_array_size(&rows);
    array_memory_allocate(rows, &array);
    input_array(rows, &array);
    output_array(rows,&array);
    delete_min(&array, rows);
    printf("\n");
    output_array(rows, &array);
    free_array(&array, rows);
    return 0;
}