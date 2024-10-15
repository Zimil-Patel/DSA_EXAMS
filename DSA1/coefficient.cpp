#include<iostream>
using namespace std;

// function to get factorial
int getFact(int num){
   
   if (num == 1) {
    return 1;
   }

   return num * getFact(num - 1);
}

// function to get coefficient
double getCoefficient(int n, int k){
    int answer;
    int nFact, kFact, nMkFact;

    nFact = getFact(n);
    kFact = getFact(k);
    nMkFact = getFact(n - k);

    answer = nFact / (kFact * nMkFact);

    return answer;
}


// main function
int main(){
    int n, k;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of k: ";
    cin >> k;

    cout << "Coefficient : " << getCoefficient(n, k) << endl;

    return 0;
}