#include<iostream>
#include <cmath>
#include <math.h>

using namespace std;

int countDigitNaiveApproach(int n){
    int counter = 0;
    while(n > 0){
        counter++;
        n /= 10;
    }
    return counter;
}

int countDigitOptimumApproach(int n){
    return (int)log10(n) + 1;
    
}

int main(){
    int input;
    cout << "Enter a number: ";
    cin >> input;

    cout << countDigitNaiveApproach(input) << endl;
    cout << countDigitOptimumApproach(input) << endl;
}