// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &nums, int k){
    if(k >= nums.size()){
        cout << "not possible";
        return;
    }
    int *array = new int[k];
    for(int i=0; i<k; i++){
        array[i] = nums[i];
    }
    
    int j=0;
    for(int i=k; i<nums.size(); i++){
        nums[j] = nums[i];
        j++;
    }
    
    j=0;
    for(int i=nums.size()-k; i<nums.size(); i++){
        nums[i] = array[j++];
    }
    
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums= {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    leftRotate(nums, 4);

    return 0;
}