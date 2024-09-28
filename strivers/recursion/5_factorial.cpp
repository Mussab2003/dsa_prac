
#include <iostream>

using namespace std;

long int factorial(int n){
    if(n <= 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << factorial(num);
    
    return 0;
}