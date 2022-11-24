#include "array.h"

void check_more_0(int* value)
{
    while (scanf("%d", value) == 0 || *value < 0 || getchar() != '\n')
    {
        printf("Wrong input");
        rewind(stdin);
    }
}

int** allocate_memory_2d(int size)
{
    return malloc(size * sizeof(int*));
}

int* allocate_memory_1d(int size)
{
    return malloc(size * sizeof(int));
}

void fill_array_2d(int** array, int rows, int columns, int* column_array)
{
    int choose;
    printf("Do you want to fill array with random values? 1 - Yes; 2 - No\n");
    while (scanf("%d", &choose) == 0 || choose < 1 || choose > 2 || getchar() != '\n')
    {
        printf("Wrong input\n");
        rewind(stdin);
    }
    switch (choose)
    {
    case 1:
        rand_fill_2d_array(array, column_array, rows, columns);
        break;
    case 2:
        fill_2d_array(array, column_array, rows, columns);
    }
}

void matrix_output(int** arr_2d, const int* row_arr, int num_of_rows)
{
    for (int i = 0; i < num_of_rows; i++)
    {
        for (int j = 0, count = 0; j < row_arr[i]; j++, count++)
        {
            printf("%4d", arr_2d[i][j]);
            if (count == row_arr[i] - 1)
                printf("\n\n");
        }
    }
}

void sum_numbers(int** sum_array, int** array, int rows, int columns)
{
    int sum = 0;
    sum_array[0] = allocate_memory_1d(columns);
    sum_array[1] = allocate_memory_1d(columns);
    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            sum = sum + array[i][j];
        }
        sum_array[0][j] = j;
        sum_array[1][j] = sum;
        sum = 0;
    }
}

void copy(int** main_arr, int** copy_arr, int columns, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        copy_arr[i] = allocate_memory_1d(columns);
        for (int j = 0; j < columns; j++)
        {
            copy_arr[i][j] = main_arr[i][j];
        }
    }
}
void quick_sort(int* arr, int left, int right)
{
    for (int p = 0; p < 3; p++) {
        int ref_point, l_hold = left, r_hold = right;
        ref_point = arr[left];
        while (left < right)
        {
            while ((arr[right] >= ref_point) && (left < right))
                right--;
            if (left != right)
            {
                arr[left] = arr[right];
                left++;
            }
            while ((arr[left] <= ref_point) && (left < right))
                left++;
            if (left != right)
            {
                arr[right] = arr[left];
                right--;
            }
        }
        arr[left] = ref_point;
        ref_point = left;
        left = l_hold;
        right = r_hold;
        if (left < ref_point)
            quick_sort(arr, left, ref_point - 1);
        if (right > ref_point)
            quick_sort(arr, ref_point + 1, right);
    }
}

void print(int* array, int size)
{
    for (int j = 0; j < size; j++)
    {
        printf(" %2d ", array[j]);
    }
}

void indent()
{
    printf("\n\n");
}

void switch_columns(int** array, int** sum_array123,const int rows,const int columns)
{
    int rat[rows][columns];
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < columns; i++)
        {
            rat[j][i] = array[j][sum_array123[0][i]];
        }
    }
    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            array[i][j] = rat[i][j];
        }
    }
}

void free_2d(int** array, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(array[i]);
    }
}

void rand_fill_2d_array(int** array, int* column_array, int rows, int columns)
{
    srand(time(NULL));
    for (int i = 0; i < rows; i++)
    {
        column_array[i] = columns;
        array[i] = allocate_memory_1d(column_array[i]);
        for (int j = 0; j < column_array[i]; j++)
        {
            array[i][j] = -100 + rand() % (100 + 100 + 1);
        }
    }
}

void fill_2d_array(int** array, int* row_array, int num_of_rows, int num_of_columns)
{
    for (int i = 0; i < num_of_rows; i++)
    {
        row_array[i] = num_of_columns;
        array[i] = allocate_memory_1d(num_of_rows);
        for (int j = 0; j < num_of_columns; j++)
        {
            print_for_array_input_2d(i, j);
            check(&array[i][j]);
        }
    }
}