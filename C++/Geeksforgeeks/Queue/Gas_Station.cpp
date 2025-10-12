#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost)
    {
        int total_deficit = 0;
        int balance = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            balance += gas[i] - cost[i];

            // If balance becomes negative, can't move to next station
            if (balance < 0)
            {
                total_deficit += balance;  // record shortage
                start = i + 1;             // choose next station as potential start
                balance = 0;               // reset tank
            }
        }

        // If total gas (balance + deficit) >= 0, return start; else -1
        return (balance + total_deficit >= 0) ? start : -1;
    }
};

int main() {
    Solution obj;

    vector<int> gas  = {4, 5, 7, 4};
    vector<int> cost = {6, 6, 3, 5};

    int result = obj.startStation(gas, cost);

    if (result != -1)
        cout << "The car can start at station index: " << result << endl;
    else
        cout << "It is not possible to complete the circular tour." << endl;

    return 0;
}

