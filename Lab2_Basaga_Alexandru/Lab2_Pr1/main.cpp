#include <cstdio>
#include "NumberList.h"

int main() {
	NumberList list;

	list.Init();

	int numbers[] = { 1, 5, -10, 15, 3, 0, -51 };
	for (int i = 0; i < 7; i++)
		list.Add(numbers[i]); 

	list.Print();
	list.Sort();
	list.Print();
}