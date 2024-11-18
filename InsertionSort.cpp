#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; 
    }
}
int main() {
    int arr[] = {10, 2, 8, 3, 15, 55, 1, 7, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    insertionSort(arr, size);

    cout << endl << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
