#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{
    int num=0;
    printf("1 task - 1; 2 task - 2\n");
    void (*menu[2])(void)={task1,task2};
    scanf_s("%d", &num);
    menu[num-1]();
}