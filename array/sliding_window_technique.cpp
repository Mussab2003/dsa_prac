//Sliding Window Technique
//Can be used to find the max sum of subarray of length k.
#include <iostream>

using namespace std;

int maxSubArray(int Arr[], int n, int k){
    int max_subarray = 0;
    for(int i=0; i<k; i++){
        max_subarray += Arr[i];
    }
    int windowSum = max_subarray;
    for(int i=k; i<n; i++){
        windowSum += Arr[i] - Arr[i-k];
        max_subarray = max(windowSum, max_subarray);
    }
    return max_subarray;
}


int main() {
    int Array[5] = {100, 2, 10, 4, 25};
    cout << maxSubArray(Array, 5, 2);

    return 0;
}