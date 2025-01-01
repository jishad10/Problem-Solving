#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }
};

int main() {
    Solution solution;

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Original string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;


    solution.reverseString(s);
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}

