#include <stdio.h>
#include <string.h>
#include "header.h"


int main(int argc, char **argv)
{
    char **s;
    int *arr1, *arr2;
    arr1 = allocate_memory_1d(argc);
    arr2 = allocate_memory_1d(argc);

    s = allocstr_arr(argc, 255);
    cpycmd(s, argc, argv);

    for (int i = 0; i < argc; ++i)
    {
        onlyspace(s[i]); // для знаков препинания
    }

    //нормализация строки
    for (int i = 0; i < argc; i++)
    {
        s[i] = normalizestr(s[i]);
    }
    maxword(argc, s  , arr1);
    copy(&arr1, &arr2, argc, 1);//для суммы длин строк

    quick_sort(arr1, 0, argc - 1);

    switchstr(s, argv, argc, arr1, arr2);

    for (int i = 0; i < argc - 1; i++)
    {
        printf("\n%d - %d\n", i, arr1[i]);
    }
    putsarr(s + 1, argc - 1);
    return 0;
}