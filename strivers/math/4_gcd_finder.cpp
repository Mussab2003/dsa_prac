//The greatest common number that divides both number is gcd

#include <iostream>

using namespace std;

//Normal Approach Uses O(min(n1, n2))
int findGCD(int n1, int n2){
    for(int i=min(n1, n2); i>0; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }
    return 0;   
}


int main(){
    int n1, n2;
    cout << "Enter num 1: ";
    cin >> n1;
    cout << "Enter num 2: ";
    cin >> n2;
    cout << findGCD(n1, n2);
}