#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1; // Map the value to an index
            if (nums[index] < 0) {        // If already marked (negative), it's a duplicate
                result.push_back(index + 1); // Add the original number (index + 1) to the result
            } else {
                nums[index] = -nums[index]; // Mark the index as visited
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> duplicates = solution.findDuplicates(nums);

    cout << "Duplicates found: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

