// LINEAR SEARCH ALGORITHM
// Step 1: Store serach value int serach varibale
// Step 2: Traverse each element using for loop in array
// Step 3: In each iteration compare value of arr[i] with the search value
// Step 4: If value match then return i (postion of value where it found)
// Step 5: If search value not present in loop return -1 after loop iterations which means element not found

// EXAMPLE
// arr = 12, 34, 24, 55
// searchVal = 24

// traverse each element and compare
// arr[0] -> 12 == 24 // false
// arr[1] -> 12 == 24 // false
// arr[2] -> 24 == 24 // true --> return postion value (2)

#include<iostream>
using namespace std;

// METHOD TO SEARCH ELEMENT IN ARRAY
int searchValueInArray(int arr[], int size, int searchVal){

    // TRAVERSE THE EACH ELEMENT IN LOOP
    for (int i = 0; i < size; i++){

        // COMPARE EACH ELEMENT 
        if ((arr[i] ^ searchVal) == 0) // IF (arr[i] == searchVal)
        {
            return i; // IF TRUE THEN RETURN 'i' : MEANS POSITION OF ARRAY WHERE ELEMENT FOUND
            // THEN LOOP WILL GET TERMINATED
        }

    }

    // RETURN -1 MEANS AFTER TRAVERSING EACH ELEMENT NO ELEMENT FOUND MATCHING WITH SEARCH VALUE 
    return -1;

}

// PRINT ARRAY
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int size, searchVal;

    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];

    // TAKING ARRAY INPUT
    for (int i = 0; i < size; i++){
        cout << "Enter value of arr[" << i << "] : ";
        cin >> arr[i];
    }

    // GET SEARCH VALUE INPUT
    cout << endl << "Enter value for search : ";
    cin >> searchVal;

    printArray(arr, size);

    int result = searchValueInArray(arr, size, searchVal);

    if (result == -1){
        cout << endl << "Value not found in array!" << endl;
    } else {
        cout << endl << "Value found at postion: " << result << endl;
    }

}