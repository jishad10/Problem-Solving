#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }

        nums = temp;   // Copy temp back into nums
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

