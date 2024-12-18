#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

int main(){
    int arr[] = {10,2,8,3,15,55,1,7,9,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted Array: ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    bubbleSort(arr, size);

    cout << endl << "After sorting: ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;

}