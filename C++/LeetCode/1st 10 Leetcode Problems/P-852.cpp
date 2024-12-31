#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while(s < e)
        {
            if(arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }else{
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {0, 2, 4, 7, 5, 3, 1};
    int peakIndex = sol.peakIndexInMountainArray(arr);

    cout << "Peak index in the mountain array : " << peakIndex << endl;

    return 0;
}
