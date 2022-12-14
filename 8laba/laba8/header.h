#ifndef LABA5_ARRAYS_H
#define LABA5_ARRAYS_H
#endif
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
int strlen1(const char *str);
char* normalizestr(char *string);
void cpycmd(char **string, int argc, char **argv);
void putsarr(char **string, int num_of_str);
void maxword(int argc1, char **argv1, int *lentharr);
void onlyspace (char *string);
char* prekol(int argc1, char**str);
void switchstr(char** str, char** argv1, int argc1, const int *switch_arr1, int *switch_arr2);
char** allocstr_arr(int num_of_elem, int size_of_elem);
char* allocstr(int num_of_elem, int size_of_elem);
char* reallocstr(int size, char *mem);
int** allocate_memory_2d(int size);
int* allocate_memory_1d(int size);
int* reallocate_memory_1d(int * array, int size);
int** reallocate_memory_2d(int ** array, int size);
void copy(int **main_arr, int **copy_arr, int columns, int rows);
void free_2d(int **array, int size);
void quick_sort(int *arr, int left, int right);
