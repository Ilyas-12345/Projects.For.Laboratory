#include <stdio.h>
int main()
{
    int mass1[10], mass2[10], mass3[10], min, i, a=0,j, amount, v,c;
    printf("input number of elements mass1 \n");
    for (i = 0; i < 10; i++)
    {
        printf("input elements %d \n", i);
        v=scanf_s("%d", &mass1[i]);
        while (v!=1)
        {
            printf("incorrect data \n");
            rewind(stdin);
            v=scanf_s("%d", &mass1[i]);
        }
    }
    printf("input number of elements mass2= \n");
    for (i = 0; i < 10; i++)
    {
        printf("input elements %d \n", i);
        c=scanf_s("%d", &mass2[i]);
        while (c!=1)
        {
            printf("incorrect data \n");
            rewind(stdin);
            c=scanf_s("%d", &mass2[i]);
        }
    }

    for(i=0;i<10; i++)
    {
        amount=0;
        for (j=0;j<10;j++)
            if (mass1[i]!=mass2[j])
                amount++;
        if(amount==10)
        {
            a++;
            mass3[a]=mass1[i];
        }
    }
    min=mass3[1];
    for (i=1; i<=a; i++)
            if (min> mass3[i])
    min= mass3[i];
    printf("Minimal'ni element massiva = %d \n", min);
    return 0;
}
