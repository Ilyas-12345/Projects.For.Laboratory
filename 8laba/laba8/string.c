#include "header.h"
//STRING ROFLANI

void switchstr(char** str, char** argv1, int argc1, const int *switch_arr1, int *switch_arr2)
{
    for (int i = 0, v = 1; i < (argc1 - 1); i++, v++)
    {
        for (int j = 0, z = 1; j < (argc1 - 1); j++, z++)
        {
            if(switch_arr1[i] == switch_arr2[j])
            {
                str[v] = argv1[z];
                switch_arr2[j] = 0;
                break;
            }
        }
    }
}

void onlyspace (char *string)
{
    for (int j = 0; j < strlen1(string); j++)
    {
        if (string[j] > 47 && string[j] < 58)
            continue;
        if ((int)string[j] == 32 || string[j] > 0 && string[j] < 65 || string[j] > 90 && string[j] < 97 || string[j] > 122 && string[j] < 127)
        {
            string[j] = ' ';
        }
    }
}
void maxword( const int argc1, char **argv1, int *lentharr)
{
    int *arr2 = NULL, count = 0;
    arr2 = allocate_memory_1d(255);
    for(int i = 1, k = 0, h = 0; i < argc1; i++)
    {
        for (int j = 0; j < (strlen1(argv1[i]) + 1) ; j++)
        {
            if(argv1[i][j] != ' ')
            {
                count++;
            }
            if(argv1[i][j] == ' ')
            {
                arr2[k] = count;
                k++;
                count = 0;
                continue;
            }
            if (argv1[i][j] == '\0')
            {
                count--;
                arr2[k] = count;
                k++;
                count = 0;
                continue;
            }
        }
        int max;
        max = arr2[0];
        for (int z = 1; z < k; z++)
        {
            if(arr2[z] > max)
                max = arr2[z];
        }
        lentharr[h] = max;
        h++;
        k = 0;
    }
}

void putsarr(char **string, int num_of_str)
{
    for (int i = 0; i < num_of_str; ++i)
    {
        puts(string[i]);
    }
}
void cpycmd(char **string, int argc1, char **argv1)
{
    for (int i = 0; i < argc1; i++)
    {
        string[i] = allocstr(strlen1(argv1[i]), sizeof(char));
        for (int j = 0; j < strlen1(argv1[i]); j++)
        {
            string[i][j] = argv1[i][j];
        }
    }
}
char* delvoid(char *string)
{
    int count = 0, n;
    n = strlen1(string);
    for(int i = 0; i < strlen1(string) + 1; i++)
    {
        if(string[i] == ' ')
        {
            for (int j = i; j < strlen1(string); j++)
            {
                string[j] = string[j + 1];
            }
            i--;
            count++;
        }
    }
    return reallocstr(n - count, string);
}

char* normalizestr(char *string)
{
    int n, count = 0;
    n = strlen1(string);
    if(n == 1)
        return reallocstr(n + 1, string);
    for(int i = -1; i < n; i++)
    {
        if(string[i] == ' ' && string[i]=='\t')
        {
            if(string[i + 1] == ' ')
            {
                for (int j = i + 1; j < n; j++)
                {
                    string[j] = string[j + 1];
                }
                i--;
                count++;
            }
        }
    }
    if(string[0] == ' ')
        for (int j = 0; j < n; j++)
        {
            string[j] = string[j + 1];
        }
    return reallocstr(n - count - 1, string);
}

int strlen1(const char *str)
{
    int count = 0, i = 0;
    while(str[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

char* allocstr(int num_of_elem, int size_of_elem)
{
    return calloc(num_of_elem, size_of_elem);
}

char** allocstr_arr(int num_of_elem, int size_of_elem)
{
    return calloc(num_of_elem, size_of_elem);
}

char* reallocstr(int size, char *mem)
{
    return realloc(mem, size);
}

//WORKING WITH MEMORY
int* allocate_memory_1d(int size)
{
    return malloc(size * sizeof(int));
}

void free_2d(int **array, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(array[i]);
    }
}

void quick_sort(int *arr, int left, int right)
{
    for(int p = 0; p < 3; p++) {
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

void copy(int **main_arr, int **copy_arr, int columns, int rows)
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

