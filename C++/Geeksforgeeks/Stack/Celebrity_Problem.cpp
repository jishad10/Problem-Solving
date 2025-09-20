#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool knows(vector<vector<int> >& M, int a, int b)
    {
        return M[a][b] == 1;
    }

public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M)
    {
        int n = M.size();
        stack<int> s;

        // Step 1: Push all elements in stack
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        // Step 2: Pairwise elimination
        while (s.size() > 1)
        {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();

            if (knows(M, a, b)) // a knows b -> a cannot be celebrity
                s.push(b);
            else                // a doesn't know b -> b cannot be celebrity
                s.push(a);
        }

        int ans = s.top();

        // Step 3: Verify candidate
        // Row check: candidate should not know anyone (except itself)
        for (int i = 0; i < n; i++)
        {
            if (i == ans) continue;           // skip diagonal
            if (M[ans][i] != 0) return -1;
        }

        // Column check: everyone (except candidate) should know candidate
        for (int i = 0; i < n; i++)
        {
            if (i == ans) continue;           // skip diagonal
            if (M[i][ans] != 1) return -1;
        }

        return ans;
    }
};


int main()
{
    int n;
    cout << "Enter number of people at the party (n): ";
    cin >> n;

    vector<vector<int>> M(n, vector<int>(n));

    cout << "Enter the " << n << "x" << n << " matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M[i][j];
        }
    }

    Solution ob;
    int celeb = ob.celebrity(M);

    if (celeb == -1)
        cout << "No celebrity found\n";
    else
        cout << "Celebrity index: " << celeb << "\n";

    return 0;
}

