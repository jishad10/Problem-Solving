#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool checkEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i]) {
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {

        // Character count array for s1
        int count1[26] = {0};

        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // Traverse s2 string in a window of size s1 length and compare
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // First window of size s1
        while (i < windowSize && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if (checkEqual(count1, count2))
            return 1;

        // Sliding window over the rest of s2
        while (i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;


            //remove old character...
            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;

            i++;

            if (checkEqual(count1, count2))
                return 1;
        }

        return 0;
    }
};

int main() {
    Solution solution;

    string s1, s2;
    cout << "Enter the first string (s1): ";
    cin >> s1;
    cout << "Enter the second string (s2): ";
    cin >> s2;

    if (solution.checkInclusion(s1, s2)) {
        cout << "Yes, s2 contains a permutation of s1." << endl;
    } else {
        cout << "No, s2 does not contain a permutation of s1." << endl;
    }

    return 0;
}

