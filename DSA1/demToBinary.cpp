#include<iostream>
using namespace std;

// function to convert decimal to binary
int demToBinary(int dec){
    int pow = 1, rem, binary = 0;

    while (dec > 0){
        rem = dec % 2;
        binary += (rem * pow);
        pow *= 10;
        dec /= 2;
    }

    return binary;
}


// main function
int main(){
    int decimal;

    cout << "Enter decimal value : ";
    cin >> decimal;

    cout << "Binary of " << decimal << " = " << demToBinary(decimal) << endl;

    return 0;
}