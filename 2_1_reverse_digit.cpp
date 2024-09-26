#include <iostream>
#include <cmath>

using namespace std;

int reverseNum(int num){
    int r_num = 0;
    while(num > 0){
        int a = num % 10;
        num /= 10;
        r_num = r_num * 10 + a;
    }
    return r_num;
}


int main() {
    int num;
    cin >> num;
    cout << reverseNum(num);

    return 0;
}