#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void check_more_0(int* value);
int* allocate_memory_1d(int size);
void fill_array(int* array, int num_of_elem);
void output_1d_array(const int* array, int size);
void min_last(int* array, int size, int* min);
void min_first(int* array, int size, int* min);
int* reallocate_memory_1d(int* array, int size);
void insertion_sort(int* array, int first_border, int last_border);
void bubble_sort(int* arr, int size);
void print_for_array_input(int a);
void fill_1d_array(int elem_num, int* array);
void rand_fill_1d_array(int num_of_elem, int* array);
