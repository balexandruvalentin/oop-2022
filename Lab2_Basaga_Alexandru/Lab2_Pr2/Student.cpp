#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include "Student.h"

void Student::Init() {
	name[0] = '\0';
	Math = 0.00;
	English = 0.00;
	History = 0.00;
}

void Student::setName(const char* name) {
	strcpy(this->name, name);
}

void Student::setMath(float grade) {
	this->Math = grade;
}

void Student::setEnglish(float grade) {
	this->English = grade;
}

void Student::setHistory(float grade) {
	this->History = grade;
}

const char* Student::getName() const {
	return name;
}

float Student::getMath() const {
	return Math;
}

float Student::getEnglish() const {
	return English;
}

float Student::getHistory() const {
	return History;
}

float Student::getAverage() const {
	return (Math+English+History)/3;
}

void Student::Print(float Average) {
	printf("%s:\nMath = %.2f\nEnglish = %.2f\nHistory = %.2f\nAverage = %.2f\n\n", name, Math, English, History, Average);
}

