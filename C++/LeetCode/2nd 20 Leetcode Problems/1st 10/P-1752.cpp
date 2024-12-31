#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                count++;
            }
        }

        if (nums[n - 1] > nums[0])
        {
            count++;
        }

        return count <= 1;
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test Case 1: " << (solution.check(nums1) ? "True" : "False") << endl;

    // Test case 2
    vector<int> nums2 = {2, 1, 3, 4};
    cout << "Test Case 2: " << (solution.check(nums2) ? "True" : "False") << endl;

    // Test case 3
    vector<int> nums3 = {1, 2, 3};
    cout << "Test Case 3: " << (solution.check(nums3) ? "True" : "False") << endl;

    // Test cases 4
    vector<int> nums4 = {1, 1, 1};
    cout << "Test Case 4: " << (solution.check(nums4) ? "True" : "False") << endl;

    return 0;
}

