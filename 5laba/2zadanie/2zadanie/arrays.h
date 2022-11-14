#pragma once
#include <stdio.h> 
#include <stdlib.h> 

void input_array_size(int* rows);
void array_memory_allocate(int rows, int*** array);
void input_array(int rows, int*** array);
void output_array(int rows, int*** array);
void search_min(int*** array_1, int columns_1, int i, int* min_1);
void delete_min(int*** array_1, int rows_1);
void array_find_length_of_the_col( int i, int* col, int*** array);
void free_array(int*** array_1, int rows_1);