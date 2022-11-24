#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void check_more_0(int* value);
int** allocate_memory_2d(int size);
int* allocate_memory_1d(int size);
void fill_array_2d(int** array, int rows, int columns, int* column_array);
void matrix_output(int** arr_2d, const int* row_arr, int num_of_rows);
void sum_numbers(int** sum_array, int** array, int rows, int columns);
void copy(int** main_arr, int** copy_arr, int columns, int rows);
void quick_sort(int* arr, int left, int right);
void print(int* array, int size);
void indent();
void switch_columns(int** array, int** sum_array123,const int rows, const int columns);
void free_2d(int** array, int size);