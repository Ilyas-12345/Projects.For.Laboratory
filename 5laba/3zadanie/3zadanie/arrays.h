#include <stdio.h>
#include <stdlib.h>

void check_array(int* rows_1);
void check1_array(int* columns_1);
void memory_allocate(int*** array_1, int rows_1, int columns_1);
void input_array(int*** array_1, int rows_1, int columns_1);
void output_array(int*** array_1, int rows_1, int columns_1);
void array_shift(int*** array_1, int rows_1, int columns_1);
void output_newarray(int*** array_1, int rows_1, int columns_1);
void free_array(int*** array_1, int rows_1);