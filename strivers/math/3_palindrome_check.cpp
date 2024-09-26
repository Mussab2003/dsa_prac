#include <iostream>
#include <math.h>

using namespace std;

bool checkPalindrome(int num){
    int rev_num = 0;
    int n= num;
    while(num > 0){
        int a = num % 10;
        num /= 10;
        rev_num = rev_num * 10 + a;
    }
    if(rev_num == n){
        return true;
    }
    return false;
    
}

int main(){
    int num;
    cin >> num;
    cout << checkPalindrome(num);
}