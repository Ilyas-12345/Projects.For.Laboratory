#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int mass[100][100], fl, i, j, index, q, N, M, newmass[100][100],r;
    printf("input sizes of mass= ");
    q = scanf_s("%d%d", &N, &M);
    while (q != 1 && N <= 0 || M <= 0 || getchar() != '\n')
    {
        printf("Pls try again\n");
        rewind(stdin);
        q = scanf_s("%d%d", &N, &M);
    }
    srand(time(NULL));
    printf("if u wanna input self - 0; random - random \n");
    q = scanf_s("%d", &fl);
    while (q != 1 || getchar() != '\n')
    {
        printf("Pls try again\n");
        rewind(stdin);
        q = scanf_s("%d", &fl);
    }
    if (fl == 0)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
            {
                printf("input elements mass[%d][%d]= \n", i, j);
                r = scanf_s("%d", &mass[i][j]);
                while (q != 1 || getchar() != '\n')
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
                    mass[i][j] = rand() % 100 - 80;
                    printf("%d \t", mass[i][j]);
                }
                printf("\n");
        }
    }
    for (i = 0; i < N; i++)
    {
        int stroka = 0;
        for (j = 0; j < M; j++)
        {
            if (mass[i][j] < 0)
            {
                stroka++;
                if (stroka == M)
                {
                    printf("we found first negative string  \n", stroka);
                    printf("which string =%d  \n", i);
                }
            }
        }
        if (stroka == M)
            {
                index = i;
                break;
            }
         else
            printf("right stroka wasn't find in %d string\n", i);
    }
    for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
            {
                newmass[i][j] = mass[i][j] + mass[index][0];
                printf("%d \t", newmass[i][j]);
            }
            printf("\n");
        }
}
