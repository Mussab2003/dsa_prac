#include <iostream>

using namespace std;

int sum(int n){
    if(n<1){
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << sum(num);
}