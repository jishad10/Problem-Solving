#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:

    vector<int> firstNegInt(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> ans;

    int n = arr.size();

    // process first window
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }

    // push answer for first window
    if (!dq.empty())
    {
        ans.push_back(arr[dq.front()]);
    }
    else {
        ans.push_back(0);
    }

    // process remaining windows
    for (int i = k; i < n; i++)
    {
        // remove elements out of current window
        if (!dq.empty() && (i - dq.front()) >= k)
        {
            dq.pop_front();
        }

        // add current element
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }

        // record answer
        if (!dq.empty())
        {
            ans.push_back(arr[dq.front()]);
        }
        else {
            ans.push_back(0);
        }
    }
    return ans;
}
};


int main() {

    Solution sol;

    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;

    vector<int> result = sol.firstNegInt(arr, k);

    cout << "First negative integer in each window of size " << k << ": " <<endl;
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

