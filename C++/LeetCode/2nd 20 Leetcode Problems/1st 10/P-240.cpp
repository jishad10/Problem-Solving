#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];

            if (element == target) {
                return true;
            }
            if (element < target) {
                rowIndex++;
            } else {
                colIndex--;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;


    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    bool result = solution.searchMatrix(matrix, target);

    if (result) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}

