// SWAP TWO NUMBER USING BITWISE OPERATOR

#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Before swap " << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    // SWAPPING THE VALUE
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << endl << "After swap " << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    return 0;
}