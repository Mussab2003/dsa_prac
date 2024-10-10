#include <iostream>
#include <vector>
#include <set>

using namespace std;

//Solution 1 using stl set with O(n) time complexity and O(n) space complexity
int removeDuplicateSol1(vector<int> &nums){
    set<int> num_set;

    for(int i=0; i<nums.size(); i++){
        num_set.insert(nums[i]);
    }

    int k = num_set.size();  //Number of unique values

    int j = 0;
    for(int x: num_set){
        nums[j++] = x;
    }
    return k;
}

//Solution 2 using two pointer with O(n) time complexity and O(1) space complexity
int removeDuplicateSol2(vector<int> &nums){
    int i=0;
    for(int j=0; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[j] = nums[i];
        }
    }
}