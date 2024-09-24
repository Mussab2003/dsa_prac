//Two Pointer Technique
//Can be used to find if the sum of any pair is equal to a number x
//Array must be sorted

#include <iostream>

using namespace std;

bool findPairSum(int Arr[], int n, int x){
    int i=0;
    int j=n-1;
    
    while(i < j){
        if(Arr[i] + Arr[j] == x)
            return 1;
        else if(Arr[i] + Arr[j] > x)
            j--;
        else if(Arr[i] + Arr[j] < x){
            i++;
        }
    }
    return 0;
}

int main() {
    int Array[5] = {1, 2, 3, 4, 5};
    cout << findPairSum(Array, 5, 7);
    return 0;
}