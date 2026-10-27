#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


void generateArray(int* arr, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; ++i) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}


void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}


bool satisfyCriterion(int value) {
    if (value < 0 || value % 2 != 0) {
        return true;
    }
    return false;
}


int countElements(const int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (satisfyCriterion(arr[i]) == true) {
            count++;
        }
    }
    return count;
}


int sumElements(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (satisfyCriterion(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

void replaceWithZeros(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (satisfyCriterion(arr[i])) {
            arr[i] = 0;
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int SIZE = 24;
    const int MIN_VAL = -50;
    const int MAX_VAL = 15;

    int a[SIZE];

 
    generateArray(a, SIZE, MIN_VAL, MAX_VAL);

 
    cout << "Original array:" << endl;
    printArray(a, SIZE);

    int count = countElements(a, SIZE);
    int sum = sumElements(a, SIZE);

 
    replaceWithZeros(a, SIZE);


    cout << "\nResults:" << endl;
    cout << "Count = " << count << endl;
    cout << "Sum   = " << sum << endl;

    cout << "\nModified array:" << endl;
    printArray(a, SIZE);

    return 0;
}