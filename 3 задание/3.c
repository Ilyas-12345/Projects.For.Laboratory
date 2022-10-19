#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
int main()
{
    int mass[100][100], M, N, fl, sum = 0, q, r,b;
  
    printf("input sizes of mass= ");
    b = scanf_s("%d%d", &N, &M);
    while (b != 1 && N <= 0 || M <= 0 || N!=M || getchar() != '\n')
    {
        printf("Pls try again\n");
        rewind(stdin);
        b= scanf_s("%d%d", &N, &M);
    }
    printf("if u wanna uself - 0, random - random \n");
    srand(time(NULL));
    q=scanf_s("%d", &fl);  
    while (q != 1 || getchar() != '\n')
    {
        printf("Pls try again\n");
        rewind(stdin);
        q = scanf_s("%d", &fl);
    }
    if (fl == 0)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                printf("input number of lements mass[%d][%d]= \n", i, j);
                r=scanf_s("%d", &mass[i][j]);
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
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                mass[i][j] = rand() % 200 - 100;
                printf("%d \t", mass[i][j]);
            }
            printf("\n");
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j > 0; j--)
        {
            sum = sum + mass[i][j];
            if (i + j == N - 1 || i == j)
                break;
        }
    }
    printf("sum=%d", sum);
}