#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* string;
	int size;
	printf("Inpite size of string:");
	scanf_s("%d", &size);
	rewind(stdin);
	allocateMemory(&string,size);
	String(&string, size);
	ChangeRegistår(&string, size);
	outputString(&string, size);
	free(string);
}
