#include<iostream>
using namespace std;

// function to convert binary to decimal
int BinaryToDec(int binary){
   
    int decimal = 0, pow = 1, rem;

    while (binary > 0){
        rem = binary % 10;
        decimal += (rem * pow);
        pow *= 2;
        binary /= 10;
    }

    return decimal;
}


// main function
int main(){
    int binary;

    cout << "Enter binary value : ";
    cin >> binary;

    cout << "Decimal of " << binary << " = " << BinaryToDec(binary) << endl;

    return 0;
}