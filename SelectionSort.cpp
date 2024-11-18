#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) { 
                minIndex = j;
            }
        }  
        if (minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}
int main() {
    int arr[] = {10, 2, 8, 3, 15, 55, 1, 7, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, size);

    cout << endl << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
