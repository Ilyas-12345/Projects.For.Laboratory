#include "array.h"

void check_more_0(int* value)
{
    while (scanf_s("%d", value) == 0 || *value < 0 || getchar() != '\n')
    {
        printf("Wrong input");
        rewind(stdin);
    }
}

int* allocate_memory_1d(int size)
{
    return malloc(size * sizeof(int));
}

void fill_array(int* array, int num_of_elem)
{
    int choose;
    printf("Do you want to fill array with random values? 1 - Yes; 2 - No\n");
    while (scanf_s("%d", &choose) == 0 || choose < 1 || choose > 2 || getchar() != '\n')
    {
        printf("Wrong input\n");
        rewind(stdin);
    }
    switch (choose)
    {
    case 1:
        rand_fill_1d_array(num_of_elem, array);
        break;
    case 2:
        fill_1d_array(num_of_elem, array);
    }
}

void output_1d_array(const int* array, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%4d ", *(array + i));
}

void min_last(int* array, int size, int* min)
{
    *min = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] <= array[*min])
            *min = i;
    }
}

void min_first(int* array, int size, int* min)
{
    *min = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < array[*min])
            *min = i;
    }
}

int* reallocate_memory_1d(int* array, int size)
{
    return realloc(array, size * sizeof(int));
}

void insertion_sort(int* array, int first_border, int last_border)
{
    clock_t fTimeStart, fTimeStop;
    fTimeStart = clock() * 1000 / CLOCKS_PER_SEC;
    for (int i = first_border + 2, max; i < last_border; i++)
    {
        for (int j = first_border + 1, l = i; j < l; j++)
        {
            if (array[i] <= array[j])
            {
                max = array[i];
                for (int m = i, z = j; z < m; m--)
                {
                    array[m] = array[m - 1];
                }
                array[j] = max;
                continue;
            }
        }
    }
    fTimeStop = clock() * 1000 / CLOCKS_PER_SEC;
    printf("\nTime for sorting %i(ms)\n", fTimeStop - fTimeStart);
}

void bubble_sort(int* arr, int size) 
{
    clock_t fTimeStart, fTimeStop;
    int z, no_swap = 0;

    fTimeStart = clock() * 1000 / CLOCKS_PER_SEC;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                z = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = z;
                no_swap = 1;
            }
        }
        if (no_swap == 0)
        {
            break;
        }
    }
    fTimeStop = clock() * 1000 / CLOCKS_PER_SEC;
    printf("\nTime for sorting %i(ms)\n", fTimeStop - fTimeStart);
}

void rand_fill_1d_array(int num_of_elem, int* array)
{
    srand(time(NULL));
    for (int j = 0; j < num_of_elem; j++)
    {
        array[j] = -100 + rand() % (100 + 100 + 1);
    }
}

void fill_1d_array(int elem_num, int* array)
{
    for (int i = 0; i < elem_num; ++i)
    {
        print_for_array_input(i);
        scanf_s("%d", (array + i));
    }
}

void print_for_array_input(int a)
{
    printf("Enter element %d \n", a);
}