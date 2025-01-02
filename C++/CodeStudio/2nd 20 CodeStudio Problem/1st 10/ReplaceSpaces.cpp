#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str) {
    string temp = "";  // Temporary string to store the result

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ') {  // Check for space character
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);  // Append the current character
        }
    }

    return temp;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string str;
        getline(cin, str);
        cout << replaceSpaces(str) << endl;
    }

    return 0;
}

