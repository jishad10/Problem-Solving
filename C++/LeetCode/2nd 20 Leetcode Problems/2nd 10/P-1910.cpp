#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {

        while (s.length() != 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solution;

    string s, part;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the part to remove: ";
    cin >> part;

    string result = solution.removeOccurrences(s, part);
    cout << "Resulting string: " << result << endl;

    return 0;
}

