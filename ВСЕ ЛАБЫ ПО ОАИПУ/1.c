#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int   N, M, fl, i, j, min, max, q = 0, mass[100][100],r,t;
    printf("input sizes of mass= ");
    q=scanf_s("%d%d", &N, &M);
    while (q != 1 && N <= 0 || M <= 0 || getchar() != '\n')
    {
        printf("Pls try again\n");
        rewind(stdin);
        q = scanf_s("%d%d", &N, &M);
    }
    srand(time(NULL));
    printf("if u wanna input self - 0; random - random \n");
    t=scanf_s("%d", &fl);
    while (t != 1 || getchar() != '\n')
    {
        printf("Pls try again\n");
        rewind(stdin);
        t= scanf_s("%d", &fl);
    }
    if (fl == 0) 
    {
        for (i = 0; i < N; i++) 
        {
            for (j = 0; j < M; j++) 
            {
                printf("input elements mass[%d][%d]= \n", i, j);
                r = scanf_s("%d", &mass[i][j]);
                while (r != 1 || getchar() != '\n')
                {
                printf("Pls try again\n");
                rewind(stdin);
                r = scanf_s("%d", &mass[i][j]);
                }
            }
        }
    }
    else
    {
        for (i = 0; i < N; i++) 
        {
            for (j = 0; j < M; j++) 
            {
                mass[i][j] = rand() % 1000-500;
                printf("%d \t", mass[i][j]);
            }
            printf("\n");
        }
    }
    for (i = 0; i < N; i++)
    {
        int column = 0, str = 0;
        min = mass[i][0];
        for (j = 0; j < M; j++)
        {
            if (min > mass[i][j])
            {
                min = mass[i][j];
                column = j;
            }
        }
        max = mass[0][column];
        for (j = 0; j < N; j++) 
        {
            if (max < mass[j][column])
            {
                max = mass[j][column];
                str = j;
            }
        }
        printf("max element %d\n min element %d\n", max, min);
        if (min == max)
            printf("index sedlovoi tochki (%d; %d) \n", str, column);
        else
            printf("sedlovoya tochka wasn't find");
    }
}