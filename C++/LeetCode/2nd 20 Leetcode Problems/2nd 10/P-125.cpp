#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    //valid check first
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }

    //convert lowercase
    char toLowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    //check palindrome
    bool checkPalindrome(string a)
    {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e)
        {
            if (a[s] != a[e]) {
                return 0;
            } else {
                s++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {

        string temp = "";

        //check valid first
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        //convert lowercase
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }

        //then check Palindrome
        return checkPalindrome(temp);
    }
};


int main() {
    Solution solution;

    // Example test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";

    cout << "Test case 1: \"" << test1 << "\"" << endl;
    cout << "Is Palindrome? " << (solution.isPalindrome(test1) ? "Yes" : "No") << endl;

    cout << "Test case 2: \"" << test2 << "\"" << endl;
    cout << "Is Palindrome? " << (solution.isPalindrome(test2) ? "Yes" : "No") << endl;

    cout << "Test case 3: \"" << test3 << "\"" << endl;
    cout << "Is Palindrome? " << (solution.isPalindrome(test3) ? "Yes" : "No") << endl;

    return 0;
}
