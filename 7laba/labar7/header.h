#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocateMemoryNewString(char** string, int size);
void firstPart(char** string, char** newstring, int N1);
void secondPart(char** string, char** newstring, int size, int N1, int size2);
int length(int N1, int N2);
void lengthString(char** string);
int str_len(char** string);
void ChangeRegistеr(char** string_1, int size_1);
void task1();
void task2();
