#include <stdio.h>
int main()
{
    int mass[100], n, i, number = 0,v;
    printf("input number of elements mass[number]= ");
    scanf_s("%d", &n);
    for (i = 0; i <n; i++)
    {
        number++;
        printf("input elements mass[%d] \n", i);
        v=scanf_s("%d", &mass[number]);
        while (v!=1)
        {
            printf("incorrect data \n");
            rewind(stdin);
            v=scanf_s("%d", &mass[number]);
        }
        if (mass[number] % 2 == 0)
        {
            mass[number + 1] = 0;
            number++;
        }
    }
    for (i = 1; i <= number; i++)
    {
        printf("| %d ", mass[i]);
    }
}


