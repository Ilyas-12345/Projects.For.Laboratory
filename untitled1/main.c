#include <stdio.h>

int main()
{
    int mass[100], n, i,proizv=1, perviy,  vtoroy, summa=0,v;
    printf("input number of elements mass[i]=");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("input elements mass[%d] \n", i);
        v=scanf_s("%d", &mass[i]);
        while (v!=1)
        {
            printf("incorrect data \n");
            rewind(stdin);
            v=scanf_s("%d", &mass[i]);
        }
    }
    for (i=2; i<n;i+=2)
        proizv*=mass[i];
    printf("proizv=%d \n", proizv);
    for (i = 0; i < n; i++)

        if (mass[i] == 0)
        {
            perviy=i;
            break;
        }
    else if(mass[i]!=0)
            printf("zero wasn't find  \n");
    for ( i=n-1; i>-1; i--)
        if (mass[i]==0)
        {
            vtoroy = i;
            break;
        }
    else if(mass[i]!=0)
            printf("zero wasn't find \n");
    for (i=perviy+1; i<vtoroy;i++)
        summa+=mass[i];
    printf("summa=%d", summa);
return 0;
}