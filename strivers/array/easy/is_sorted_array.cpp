// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

bool isSortedArray(int *array, int n){
    for(int i=0; i<n-1; i++){
        if(array[i] > array[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    int array[] = {10, 13, 15, 90, 800, 6000, 50000, 100000, 1020000, 12500000};
    
    cout << isSortedArray(array, 10);

    return 0;
}