#include <cstdio>
#include "Math.h"

int main() {
	Math m;
	printf(" Add(5,3) = %d\n", m.Add(5, 3)); //static int Add(int,int);
	printf(" Add(10,-3,15) = %d\n", m.Add(10, -3, 15)); //static int Add(int,int,int);
	printf(" Add(5.0,3.3) = %d\n", m.Add(5.0, 3.3)); //static int Add(double,double);
	printf(" Add(10.0,-3.0,15.5) = %d\n", m.Add(10.0, -3.0, 15.5)); //static int Add(double,double,double);
	printf(" Mul(5,3) = %d\n", m.Mul(5, 3)); //static int Mul(int,int);
	printf(" Mul(10,-3,15) = %d\n", m.Mul(10, -3, 15)); //static int Mul(int,int, int);
	printf(" Mul(5.0,3.3) = %d\n", m.Mul(5.0, 3.0)); //static int Mul(double,double);
	printf(" Mul(10.0,-3.0,15.5) = %d\n", m.Mul(10.0, -3.0, 15.5)); //static int Mul(double, double);
	printf(" Add(10(count), 1..10) = %d\n", m.Add(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
	printf(" Add(\"oop\",\"2022\") = %s\n", m.Add("oop", "2022"));
	printf(" Add(\"oop\", nullptr) = %s", m.Add("oop", nullptr));
	return 0;
}