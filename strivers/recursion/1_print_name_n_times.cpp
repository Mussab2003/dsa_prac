#include <iostream>

using namespace std;

void print(int i, int n){
    if(i > n){
        return;
    }
    cout << "Mussab"  << endl;
    print(i+1, n);
}

int main() {
    print(1, 10);
    return 0;
}