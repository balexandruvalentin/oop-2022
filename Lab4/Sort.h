#pragma once

class Sort {
    int numbers[10];
    int count = 0;
public:
    
    Sort(int count, int min, int max);
    Sort();
    Sort(int vector[], int count);
    Sort(char* string);
    Sort(int count, ...);

    void InsertSort();
    //implementarea QuickSort dadea erori tip Stack Overflow pe care nu am reusesc sa le rezolv intr-o metoda rezonabila sau in timp rezonabil
    void BubbleSort();

    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
