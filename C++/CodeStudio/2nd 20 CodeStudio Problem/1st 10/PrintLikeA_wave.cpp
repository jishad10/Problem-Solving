#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> ans;

    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            // Odd index -> Bottom to top
            for (int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // Even index -> Top to bottom
            for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans;
}

int main() {
    int nRows, mCols;

    cout << "Enter the number of rows: ";
    cin >> nRows;

    cout << "Enter the number of columns: ";
    cin >> mCols;

    vector<vector<int>> arr(nRows, vector<int>(mCols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "Wave print of the matrix is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
