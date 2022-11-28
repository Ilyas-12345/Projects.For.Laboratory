#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Source.h"

int main()
{
	char* S1;
	char* S2;
	char* string;
	int sizeS1 , sizeS2 , N1 , N2,length1;
	printf("Input sizeS1 and sizeS2:");
	scanf_s("%d %d", &sizeS1, &sizeS2);
	rewind(stdin);
	allocateMemory(&S1, sizeS1);
	allocateMemory(&S2, sizeS2);
	inputString(&S1, sizeS1);
	inputString(&S2, sizeS2);
	printf("How many numbers u want to select:");
	scanf_s("%d %d", &N1, &N2);
	length1 = length(N1, N2);
	allocateMemoryNewString(&string, length1);
	firstPart(&S1, &string, N1);
	secondPart(&S2, &string, length1, N2);
	puts(string);
}