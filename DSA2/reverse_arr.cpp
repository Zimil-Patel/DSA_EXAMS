// WAP TO REVERSE AN ARRAY ELEMENTS

#include<iostream>
using namespace std;


// METHOD TO REVERSE AN ARRAY
void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// PRINT ARRAY
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int size;

    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];

    // TAKING ARRAY INPUT
    for (int i = 0; i < size; i++){
        cout << "Enter value of arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << endl  << "Current array : "; 
    printArray(arr, size);

    reverseArray(arr, size);

    cout << endl  << "Reverse array : ";
    printArray(arr, size);

    return 0;
}