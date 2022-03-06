#include <cstdio>
#include "Student.h"
#include "comparisons.h"

int main() {
	Student A, B;

	A.Init();
	A.setName("Ion Popescu");
	A.setMath(9.00);
	A.setEnglish(10.00);
	A.setHistory(5.00);
	float A_Average = A.getAverage();

	B.Init();
	B.setName("Ion Vasile");
	B.setMath(4.90);
	B.setEnglish(6.50);
	B.setHistory(5.00);
	float B_Average = B.getAverage();

	A.Print(A_Average);
	B.Print(B_Average);

	printf("Results of comparison: %d, %d, %d, %d, %d", compareName(A, B), compareMath(A, B), compareEnglish(A, B), compareHistory(A, B), compareAverage(A, B));
}