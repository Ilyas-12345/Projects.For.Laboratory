#include "arrays.h"

void input_array_size(int* rows)
{
    printf("Enter the array row \n");
    while (scanf_s("%d", rows) == 0 || *rows < 0 || getchar() != '\n')
    {
        printf("Wrong input.\n");
        rewind(stdin);
    }
}

void array_memory_allocate(int rows, int*** array)
{
    *array = (int**)malloc(rows, sizeof(int*));;
    for (int i = 0; i < rows; i++)
    {
        (*array)[i] = (int*)calloc(1 , sizeof(int));
    }
}

void input_array(int rows, int*** array)
{
    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        while (printf("elem[%d][%d] = ", i, j), scanf_s("%d", &(*array)[i][j]) != 0 && (*array)[i][j] != 0)
        {
            (*array)[i] = (int*)realloc((*array)[i], (j + 2) * sizeof(int));
            j++;
        }
    }
}
void output_array( int rows, int*** array)
{
    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        while ((*array)[i][j] != 0)
        {
            printf("%d ", (*array)[i][j]);
            j++;
            if ((*array)[i][j] == 0)
            {
                printf("\n");
            }
        }
    }
}
void search_min(int*** array_1, int columns_1, int i, int* min_1)
{
    
    for (int j = 0; j < (columns_1-1); j++) {
        if ((*min_1) > (*array_1)[i][j]) {
            (*min_1) = (*array_1)[i][j];
        }
    }
}
void delete_min(int*** array_1, int rows_1)
{
    for (int i = 0; i < rows_1; i++) {
        int columns_1 = 0;
        int min_1 = (*array_1)[i][0];
        array_find_length_of_the_col(i, &columns_1, array_1);
        if (i % 2 == 0)
        {
            search_min(array_1, columns_1, i, &min_1);
            for (int j = 0; j < columns_1; j++)
            {
                if ((*array_1)[i][j] == min_1)
                {
                    columns_1--;
                    for (int k = j; k < columns_1; k++)
                    {
                        (*array_1)[i][k] = (*array_1)[i][k + 1];
                    }
                    j--;
                    (*array_1)[i] = (int*)realloc((*array_1)[i], columns_1 * sizeof(int));
                }
            }
        }
        
    }
}
void array_find_length_of_the_col( int i, int* col, int*** array)
{
    int j = 0;
    while ((*array)[i][j])
    {
        (*col)++;
        j++;
    }
    (*col)++;
}
void free_array(int*** array_1, int rows_1)
{
    for (int i = 0; i < rows_1; i++)
    {
        free((*array_1)[i]);
    }
    free((*array_1));
}