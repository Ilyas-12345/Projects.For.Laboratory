#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocateMemory(char** string, int size);
void inputString(char** string, int size);
void allocateMemoryNewString(char** string, int size);
void firstPart(char** string, char** newstring, int N1);
void secondPart(char** string, char** newstring, int size, int N1);
int length(int N1, int N2);
