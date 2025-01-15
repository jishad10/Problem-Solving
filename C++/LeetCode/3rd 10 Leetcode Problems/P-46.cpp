#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        // Base case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            // Backtrack
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> permutations = solution.permute(nums);

    cout << "Permutations of [";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << (i < nums.size() - 1 ? ", " : "");
    }
    cout << "] are:" << endl;

    for (const auto& perm : permutations) {
        cout << "[";
        for (size_t i = 0; i < perm.size(); ++i) {
            cout << perm[i] << (i < perm.size() - 1 ? ", " : "");
        }
        cout << "]" << endl;
    }

    return 0;
}

