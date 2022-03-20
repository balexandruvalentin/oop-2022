#include <cstdio>
#include "Sort.h"

int main() {
	printf("exampleOne:\n\n");
	Sort exampleOne; // = { 15, 125, 523, 10, -52, 4789, 67, -100 }, count = 8
	exampleOne.Print();
	exampleOne.InsertSort();
	printf("After sorting:\n");
	exampleOne.Print();

	printf("\nexampleTwo:\n\n");

	Sort exampleTwo(10, 0, 999); //10 random numbers between 0 and 999
	printf("exampleTwo.numbers[0]=%d\n", exampleTwo.GetElementFromIndex(0));
	printf("exampleTwo.numbers[4]=%d\n", exampleTwo.GetElementFromIndex(4));
	exampleTwo.Print();

	printf("\nexampleThree:\n\n");

	int vector[] = { 0, 10, 155, -31, 0, 60, 6 };
	Sort exampleThree(vector, 7);
	printf("exampleFour.count=%d\n", exampleThree.GetElementsCount());
	exampleThree.Print();
	exampleThree.BubbleSort();
	printf("After sorting:\n");
	exampleThree.Print();

	printf("\nexampleFour:\n\n");

	char string[] = "10,40,100,5,70,-50,0,26,103,-1";
	Sort exampleFour(string);
	printf("exampleFour.count=%d\n", exampleFour.GetElementsCount());
	exampleFour.Print();

	printf("\nexampleFive:\n\n");

	Sort exampleFive(5, 15, 253, 523, 60, -19);
	printf("exampleFive.count=%d\n", exampleFive.GetElementsCount());
	exampleFive.Print();
	exampleFive.InsertSort();
	printf("After sorting:\n");
	exampleFive.Print();

	return 0;
}