#include <stdio.h>  
#include <stdlib.h>  


void input_output_array(int** array_1, int size_1)
{
    for (int i = 0; i < size_1; i++)
    {
        printf("array_1[%d]=", i);
        scanf_s("%d", &(*array_1)[i]);
    }
}
void output_array(int** array_1, int size_1)
{
    for (int i = 0; i < size_1; i++)
        printf("%d\t", (*array_1)[i]);
}
void counts(int** array_1, int size_1)
{
    int count_1 = 0;
    for (int i = 0; i < size_1; i++)
    {
        if ((*array_1)[i] < 0)
            count_1++;
    }
    int size_k = size_1;
    for (int i = 0;i< size_k; i++)
    {
        if ((*array_1)[i] < 0)
        {
            size_k--;
            for (int k = i; k < size_k; k++)
            {
                (*array_1)[k] = (*array_1)[k + 1];
            }
            (*array_1) = (int*)realloc((*array_1), (size_k) * sizeof(int));
            i--;
        }
    }
    for (int i = 0; i < size_k; i++)
        printf("%d\t", (*array_1)[i]);
}
