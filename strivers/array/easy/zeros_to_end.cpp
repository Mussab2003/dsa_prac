#include <iostream>
#include <vector>

using namespace std;

void moveZeros(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        //The main condition
        if (nums[i] == 0 && nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
        //for example in the case of [1, 0, 1]
        else if (nums[j] == 0 && nums[i] != 0)
        {
            i++;
        }
        //for example in the case of [4,2,4,0,0,3,0,5,1,0]
        else if (nums[j] != 0 && nums[i] != 0)
        {
            i++;
        }
    }
}

int main()
{

}