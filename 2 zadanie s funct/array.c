#include <stdio.h> 
#include <stdlib.h> 

void input_array(int** array_1, int rows_1, int columns_1)
{
    for (int i = 0; i < rows_1; i++) {
        array_1[i] = (int*)malloc(columns_1 * sizeof(int));
        for (int j = 0; j < columns_1; j++) {
            printf("array[%d][%d]=", i, j);
            scanf_s("%d", &array_1[i][j]);
        }
    }
}
void output_array(int** array_1, int rows_1, int columns_1)
{
    for (int i = 0; i < rows_1; i++) {
        for (int j = 0; j < columns_1; j++) {
            printf("%d\t", array_1[i][j]);
        }
        printf("\n");
    }
}
void search_min(int** array_1, int rows_1, int columns_1)
{
    for (int i = 0; i < rows_1; i++) {
        int colums_k = columns_1;
        if (i % 2 == 0)
        {

            int min_1 = array_1[i][0];
            for (int j = 0; j < columns_1; j++) {
                if (min_1 > array_1[i][j]) {
                    min_1 = array_1[i][j];
                }
            }
            for (int k = 0; k < columns_1; k++)
            {
                if (array_1[i][k] == min_1)
                {
                    colums_k--;
                    for (int g = k; g < colums_k; g++)
                    {
                        array_1[i][g] = array_1[i][g + 1];
                    }
                    k--;
                    array_1[i] = (int*)realloc(array_1[i], (colums_k) * sizeof(int));
                }
            }
        }
        for (int j = 0; j < colums_k; j++)
        {
            printf("%d\t", array_1[i][j]);
        }
        printf("\n");
    }
}
void output_newarray(int** array_1, int rows_1)
{
    for (int i = 0; i < rows_1; i++)
        free(array_1[i]);
    free(array_1);
    return 0;
}
