#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include "Sort.h"
#include <cstdarg>

Sort::Sort(int count, int min, int max) : count(count) {
	for (int i = 0; i < count; ++i) {
		numbers[i] = rand() % (max - min + 1) + min;
	}
}

Sort::Sort() : numbers { 15, 125, 523, 10, -52, 4789, 67, -100 }, count(8) {}; //exemplu

Sort::Sort(int vector[], int count) : count(count) {
	for (int i = 0; i < count; ++i) {
		numbers[i] = vector[i];
	}
}

Sort::Sort(char* string) {
	char* ptr;
	ptr = strtok(string, ",");
	while (ptr != nullptr) {
		numbers[count++] = atoi(ptr);
		ptr = strtok(NULL, ",");
	}
}

Sort::Sort(int count, ...)
{
	this->count = count;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; ++i) {
		numbers[i] = va_arg(args, int);
	}
	va_end(args);
}

void Sort::InsertSort() {
	for (int i = 1; i < count; ++i) {
		int j = i - 1;
		int temp = numbers[i];
		while (j >= 0 && numbers[j] > temp) {
			numbers[j + 1] = numbers[j];
			--j;
		}
		if (numbers[j + 1] != temp)
			numbers[j + 1] = temp;
	}
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int numbers[], int left, int right) {
	int x = numbers[right];
	int i = left - 1;
	for (int j = 1; j <= right - 1; ++j) {
		if (numbers[j] <= x) {
			i++;
			swap(&numbers[i], &numbers[j]);
		}
	}
	swap(&numbers[i + 1], &numbers[right]);
	return i + 1;
}

void Sort::BubbleSort() {
	for (int i = 0; i < count-1; ++i) {
		for (int j = i + 1; j < count;  ++j) {
			if (numbers[i] > numbers[j])
				swap(&numbers[i], &numbers[j]);
		}
	}
}

void Sort::Print() {
	printf("numbers = { ");
	for (int i = 0; i < count-1; ++i) {
		printf("%d, ", numbers[i]);
	}
	printf("%d }\n", numbers[count-1]);
}

int Sort::GetElementsCount() {
	return count;
}

int Sort::GetElementFromIndex(int index)
{
	return numbers[index];
}




