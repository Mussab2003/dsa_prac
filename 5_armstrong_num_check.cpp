//153 is armstrong number because 1^3 + 5^3 + 3^3 = 153

#include <iostream>
#include <math.h>

using namespace std;

bool checkArmstrongNumber(int num){
    int power = (int)log10(num) + 1;
    int sum = 0;
    int n = num;
    while(num > 0){
        sum += pow(num % 10, power);
        num /= 10;
    }
    if(n == num){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << checkArmstrongNumber(num);
}
