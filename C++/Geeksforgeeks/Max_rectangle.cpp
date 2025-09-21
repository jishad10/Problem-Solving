#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Find Next Smaller Element indices
    vector<int> nextSmallerElement(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    // Find Previous Smaller Element indices
    vector<int> prevSmallerElement(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    // Largest Rectangle in Histogram
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int l = heights[i];

            if (next[i] == -1)
            {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }

public:
    // Function to find maximum area of rectangle of 1s
    int maxArea(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        // compute area for first row
        int area = largestRectangleArea(mat[0]);

        // process remaining rows
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // update current row with histogram height
                if (mat[i][j] != 0)
                    mat[i][j] += mat[i - 1][j];
                else
                    mat[i][j] = 0;
            }
            area = max(area, largestRectangleArea(mat[i]));
        }
        return area;
    }
};


int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the matrix elements (0/1):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    Solution ob;
    int ans = ob.maxArea(mat);

    cout << "Maximum rectangle area of 1s: " << ans << endl;

    return 0;
}

