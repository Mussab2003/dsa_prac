#include <iostream>

using namespace std;

void reverseArray(int Arr[], int n){
    if(n<0){
        return;
    }
    cout << Arr[n] << endl;
    reverseArray(Arr, n-1);
}

int main(){
    int Array[] = {5, 4, 3, 2, 1};
    reverseArray(Array, 4);
}