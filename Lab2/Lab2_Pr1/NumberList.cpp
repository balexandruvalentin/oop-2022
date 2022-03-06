#include <cstdio>
#include "NumberList.h"

void NumberList::Init() {
    count = 0;
}

bool NumberList::Add(int x) {
    if (count >= 10) return false;
    numbers[count] = x;
    count++;
    return true;
}

void NumberList::Sort() {
    for (int i = count-1; i > 0; i--) {
        int imax = i;
        for (int j = i - 1; j >= 0; j--) {
            if (numbers[j] > numbers[imax]) {
                imax = j;
            }
        }
       if (i != imax) {
            int aux = numbers[i];
            numbers[i] = numbers[imax];
            numbers[imax] = aux;
       }
    }
}

void NumberList::Print() {
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}