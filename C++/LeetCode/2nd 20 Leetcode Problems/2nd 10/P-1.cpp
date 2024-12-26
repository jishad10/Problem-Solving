#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> m;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            int first = nums[i];
            int sec = target - first;

            if(m.find(sec) != m.end())
            {
                ans.push_back(m[sec]);  //m[2] = 0 te paichi so 0 index ke push
                ans.push_back(i);       // current index push
                break;
            }

            m[first] = i;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    cout << "Output: [";
    for(size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if(i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}

