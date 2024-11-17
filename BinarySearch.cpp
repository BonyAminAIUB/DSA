#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int data){
    int first = 0, index = -1;
    int last = size - 1;
   
    while(first <= last){
        int mid = (first + last) / 2;
        if(arr[mid] == data){
            return mid;
        }
        else if(data > arr[mid]){
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }
    return index;
}
int main(){
    int arr[] = {1,2,4,5,6,8,9,10,11,13,14,15,17,19,20},data;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the number that you having search: ";
    cin >> data;
    int index = binarySearch(arr,size,data);
    if(index >= 0){
		cout << "Data " << arr[index] << " found at index = " << index << endl;
	}
	else{
		cout << "Data Not Found" << endl;
	}
    return 0;
}