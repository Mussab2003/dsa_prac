// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void SecondMaxSecondMin(int *array, int n){
    int max = 0, min = 100000;
    int second_max =0, second_min = 100000;
    for(int i=0; i<n; i++){
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    for(int i=0; i<n; i++){
        if(second_max < array[i] && array[i] != max){
            second_max = array[i];
        }
        if(second_min > array[i] && array[i] != min){
            second_min = array[i];
        }
    }
    cout << "Second Max: " << second_max << endl;
    cout << "Second Min: " << second_min << endl;
}

int main() {
    int array[] = {10, 13, 15, 9, 8, 60, 50, 100, 102, 125};
    
    SecondMaxSecondMin(array, 10);

    return 0;
}