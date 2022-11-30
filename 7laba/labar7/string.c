#include "header.h"

void lengthString(char** string)
{
    int c, i=0;
    rewind(stdin);
    while((c = getchar())!=EOF && c != '\n')
    {
        (*string)[i++] = c;
        (*string) = (char*)realloc((*string), (i + 1) * sizeof(char));
    }
    (*string)[i] = '\0';
}

int str_len(char** string)
{
    int size=0;
    while ((*string)[size]!='\0')
    size++;
    return size;
}

int length( int N1, int N2)
{
    int size = 0;
    size = N1 + N2+1;
    return size;
}

void allocateMemoryNewString(char** string, int size)
{
    *string = (char*)malloc(size*sizeof(char));
}

void firstPart(char** string, char** newstring, int N1)
{
    int S1 = 0;
    for (int i = 0; i < N1; i++)
    {
        (*newstring)[i] = (*string)[i];
    }
}

void secondPart(char** string, char** newstring, int  size, int N2, int size2)
{
    int S1 = 0;
    for (int i=size-N2-1,j=size2; i <size; i++)
    {
        (*newstring)[i] = (*string)[j-N2];
        j++;
    }
}

void ChangeRegistеr(char** string_1, int size_1)
{
    int count = 0;
    for (int i = 0; i < size_1;i++)
    {
        if ((*string_1)[i] ==' ')
            count++;
        if ((*string_1)[i] >= 'a' && (*string_1)[i] <= 'z' && count>=0)
        {
            (*string_1)[i] -= 'a' - 'A';
            count=-1;
        }
    }
}

void task2(void)
{
    char* S1=calloc(1,1);
    char* S2=calloc(1,1);
    char* string;
    int sizeS1=0 , sizeS2=0 , N1=0, N2=0,length1;
    printf("Input S1:");
    lengthString(&S1);
    printf("Input S2:");
    lengthString(&S2);
    sizeS1=str_len(&S1);
    sizeS2=str_len(&S2);
    printf("How many numbers u want to select:\n");
    scanf_s("%d %d", &N1,&N2);
    length1 = length(N1, N2);
    allocateMemoryNewString(&string, length1);
    firstPart(&S1, &string, N1);
    secondPart(&S2, &string, length1, N2,sizeS2);
    printf("Result:");
    puts(string);
    free(S1);
    free(S2);
    free(string);
}

void task1(void)
{
    char* string= (char*)calloc(1,1);;
    int size;
    printf("Input string:");
    lengthString(&string);
    size = str_len(&string);
    ChangeRegistеr(&string, size);
    printf("Result:");
    puts(string);
    free(string);
}



