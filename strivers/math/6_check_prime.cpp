#include <iostream>

using namespace std;

bool checkPrime(int N){
    if(N == 1){
        return false;
    }
    int max = N /2;
    if(max == 1){
        return true;
    }
    if (N % max == 0){
        return false;
    }
    for (int i=max-1; i>1; i--){
        if(N % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number";
    cin >> num;
    cout << checkPrime(num);
    return 0;
}