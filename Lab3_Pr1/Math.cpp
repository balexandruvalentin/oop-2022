#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdarg>
#include <malloc.h>
#include <cstring>
#include "Math.h"

int Math::Add(int x, int y) {
	return x + y;
}

int Math::Add(int x, int y, int z) {
	return x + y + z;
}

int Math::Add(double x, double y) {
	return x + y;
}

int Math::Add(double x, double y , double z) {
	return x + y + z;
}

int Math::Mul(int x, int y) {
	return x * y;
}

int Math::Mul(int x, int y, int z) {
	return x * y * z;
}

int Math::Mul(double x, double y) {
	return x * y;
}

int Math::Mul(double x, double y, double z) {
	return x * y * z;
}

int Math::Add(int count, ...) {
	int sum = 0;
	va_list ptr;
	va_start(ptr, count);
	
	for (int i = 0; i < count; i++) {
		sum += va_arg(ptr, int);
	}

	va_end(ptr);
	return sum;
}

char* Math::Add(const char* str1, const char* str2) {
	if (str1 == nullptr || str2 == nullptr)
		return nullptr;
	char* ptr;
	ptr = (char*) calloc(strlen(str1)+strlen(str2)+1, sizeof(char));
	strcpy(ptr, str1);
	strcat(ptr, str2);
	return ptr;
}


