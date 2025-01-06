#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& arr) {

        int n= arr.size();
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            sum = sum + arr[i];
        }

        int leftSum = 0;
        int rightSum = sum;

        for(int i=0; i<n; i++)
        {
            rightSum = rightSum - arr[i];

            if(leftSum == rightSum)
            {
                return i;
            }

            leftSum = leftSum + arr[i];
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    int pivotIndex = solution.pivotIndex(arr);

    if (pivotIndex != -1) {
        cout << "Pivot Index: " << pivotIndex << endl;
    } else {
        cout << "No pivot index found." << endl;
    }

    return 0;
}

