#include <stdio.h>  
#include <stdlib.h>  

void input_array(int** array_1, int size_1)
{
    for (int i = 0; i < size_1; i++)
    {
        printf("array_1[%d]=", i);
        while (scanf_s("%d", &(*array_1)[i]) < 0 || getchar() != '\n')
        {
            printf("wrong input.");
            rewind(stdin);
        }
    }
}

void output_array(int** array_1, int size_1)
{
    for (int i = 0; i < size_1; i++)
        printf("%d\t", (*array_1)[i]);
}

void counts(int** array_1, int* size_1)
{
    for (int i = 0;i< (*size_1); i++)
    {
        if ((*array_1)[i] < 0)
        {
            (*size_1)--;
            for (int k = i; k < (*size_1); k++)
            {
                (*array_1)[k] = (*array_1)[k + 1];
            }
            (*array_1) = (int*)realloc((*array_1), ((*size_1)) * sizeof(int));
            i--;
        }
    }
}
