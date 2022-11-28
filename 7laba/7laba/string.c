#include "header.h"

void allocateMemory(char** string_1, int size_1)
{
	*string_1 = (char*)malloc(size_1);
}

void String(char** string_1, int size_1)
{
	fgets(*string_1, size_1, stdin);
}

void ChangeRegistår(char** string_1, int size_1)
{
	int count = 0;
	for (int i = 0; i < size_1;i++)
	{
		if ((*string_1)[i] ==' ')
			count++;
		if ((*string_1)[i] >= 'a' && (*string_1)[i] <= 'z' && count==0)
		{
			(*string_1)[i] -= 'a' - 'A';
			count--;
		}
	}
}

void outputString(char** string_1, int size_1)
{
	puts(*string_1);
}