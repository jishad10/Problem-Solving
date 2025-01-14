#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(vector<string>& ans, string str, string output, int i) {
    // Base case
    if (i >= str.length()) {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // Exclude the current character
    solve(ans, str, output, i + 1);

    // Include the current character
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    solve(ans, str, output, 0);
    return ans;
}

int main() {
    string str = "abc"; // Input string
    vector<string> result = subsequences(str);

    cout << "Subsequences are:\n";
    for (const string& subseq : result) {
        cout << "\"" << subseq << "\"\n";
    }

    return 0;
}

