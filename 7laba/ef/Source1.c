#include "Source.h"

void allocateMemory(char** string, int size)
{
	*string = (char*)malloc(size);
}

void inputString(char** string, int size)
{
	fgets(*string, size, stdin);
}

int length( int N1, int N2)
{
	int size = 0;
	size = N1 + N2 + 1;
	return size;
}

void allocateMemoryNewString(char** string, int size)
{
	*string = (char*)malloc(size);
}

void firstPart(char** string, char** newstring, int N1)
{
	int S1 = 0;
	for (int i = 0; i < N1; i++)
	{
		(*newstring)[i] = (*string)[i];
	}
}

void secondPart(char** string, char** newstring, int  size, int N2)
{
	int S1 = 0;
	for (int i=size-N2; i < size; i++)
	{
		(*newstring)[i] = (*string)[i];
	}
}



