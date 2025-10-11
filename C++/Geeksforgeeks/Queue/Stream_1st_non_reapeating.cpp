#include <iostream>
#include <queue>
#include <map>
using namespace std;

class Solution {
  public:
    string firstNonRepeating(string &A) {

        map<char, int> count;
        string ans = "";
        queue<char> q;

        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];

            // increase count
            count[ch]++;

            // push in queue
            q.push(ch);

            // check for non-repeating characters
            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    // repeating character — remove from queue
                    q.pop();
                }
                else {
                    // first non-repeating character found
                    ans.push_back(q.front());
                    break;
                }
            }

            // if no non-repeating character found
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};


int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    Solution obj;
    string result = obj.firstNonRepeating(s);

    cout << "\nFirst non-repeating characters sequence:\n";
    cout << result << endl;

    return 0;
}

