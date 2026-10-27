#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateArrayRecursive(int* arr, int size, int minVal, int maxVal, int index = 0) {
    if (index >= size) {
        return;
    }
    arr[index] = minVal + rand() % (maxVal - minVal + 1);
    generateArrayRecursive(arr, size, minVal, maxVal, index + 1);
}
void printArrayRecursive(const int* arr, int size, int index = 0) {
    if (index >= size) {
        cout << endl;
        return;
    }
    cout << setw(5) << arr[index];
    printArrayRecursive(arr, size, index + 1);
}

bool satisfyCriterion(int value) {
    if (value < 0 || value % 2 != 0) {
        return true;
    }
    return false;
}

int countElementsRecursive(const int* arr, int size, int index = 0) {
    if (index >= size) {
        return 0;
    }
    int currentMatch;
    if (satisfyCriterion(arr[index]) == true) {
        currentMatch = 1;
    }
    else {
        currentMatch = 0;
    }
    return currentMatch + countElementsRecursive(arr, size, index + 1);
}

int sumElementsRecursive(const int* arr, int size, int index = 0) {
    if (index >= size) return 0;
    int currentVal;
    if (satisfyCriterion(arr[index])) {
        currentVal = arr[index];
    }
    else {
        currentVal = 0;
    }
    return currentVal + sumElementsRecursive(arr, size, index + 1);
}


void replaceWithZerosRecursive(int* arr, int size, int index = 0) {
    if (index >= size) {
        return;
    }
    if (satisfyCriterion(arr[index])) {
        arr[index] = 0;
    }
    replaceWithZerosRecursive(arr, size, index + 1);
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int SIZE = 24;
    const int MIN_VAL = -50;
    const int MAX_VAL = 15;

    int a[SIZE];

   
    generateArrayRecursive(a, SIZE, MIN_VAL, MAX_VAL);


    cout << "Original array:" << endl;
    printArrayRecursive(a, SIZE);

    int count = countElementsRecursive(a, SIZE);
    int sum = sumElementsRecursive(a, SIZE);


    replaceWithZerosRecursive(a, SIZE);

    cout << "\nResults:" << endl;
    cout << "Count = " << count << endl;
    cout << "Sum   = " << sum << endl;

    cout << "\nModified array:" << endl;
    printArrayRecursive(a, SIZE);

    return 0;
}