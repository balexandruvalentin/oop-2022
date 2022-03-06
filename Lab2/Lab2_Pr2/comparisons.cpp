#include "comparisons.h"
#include <cstring>

int compareName(Student A, Student B) {
	int compare = strcmp(A.getName(), B.getName());
	if (compare > 0)
		return 1;
	if (compare == 0)
		return 0;
	return -1;
}

int compareMath(Student A, Student B) {
	if (A.getMath() < B.getMath())
		return -1;
	return A.getMath() > B.getMath();
}

int compareEnglish(Student A, Student B) {
	if (A.getEnglish() < B.getEnglish())
		return -1;
	return A.getEnglish() > B.getEnglish();
}

int compareHistory(Student A, Student B) {
	if (A.getHistory() < B.getHistory())
		return -1;
	return A.getHistory() > B.getHistory();
}

int compareAverage(Student A, Student B) {
	if (A.getAverage() < B.getAverage())
		return -1;
	return A.getAverage() > B.getAverage();
}
