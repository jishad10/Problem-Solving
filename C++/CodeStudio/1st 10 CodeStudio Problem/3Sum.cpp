#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i<arr.size(); i++)
    {
        for (int j =i+1; j<arr.size(); j++)
        {
            for (int k =j+1; k<arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int s = 10;

    vector<vector<int>> result = findTriplets(arr, arr.size(), 3, s);

    cout << "Triplets with sum " << s << " are:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << "]" << endl;
    }
    return 0;
}
