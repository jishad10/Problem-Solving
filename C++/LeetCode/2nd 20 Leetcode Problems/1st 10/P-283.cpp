#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;

        // Move all non-zero elements to the beginning of the array
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[j], nums[nonZero]);
                nonZero++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution sol;
    sol.moveZeroes(nums);


    cout << "Array after moving zeroes: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

