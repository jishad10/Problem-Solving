#include <iostream>
#include <stack>
using namespace std;

int findMinimumCost(string str) {

    // If the length of the string is odd, it's impossible to balance
    if(str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;

    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // If opening brace, push into the stack
        if(ch == '{')
        {
            s.push(ch);
        }
        else {
            // If closing brace and the top is '{', pop the valid pair
            if(!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else {
                // Otherwise, push the closing brace '}'
                s.push(ch);
            }
        }
    }

    // Now the stack contains invalid expressions
    //openBraces = a, closeBraces = b

    int a = 0, b = 0;

    while(!s.empty())
    {
        if(s.top() == '{')
        {
            a++;

        }
        else
        {
            b++;
        }
        s.pop();
    }

    // Calculating minimum cost
    int ans = (a + 1) / 2 + (b + 1) / 2;

    return ans;
}

int main() {
    string str1 = "{{{}";
    string str2 = "{{{{}}";
    string str3 = "{{{}}}}";
    string str4 = "{{{{}}}}";

    cout << "Minimum cost for \"" << str1 << "\": " << findMinimumCost(str1) << endl;
    cout << "Minimum cost for \"" << str2 << "\": " << findMinimumCost(str2) << endl;
    cout << "Minimum cost for \"" << str3 << "\": " << findMinimumCost(str3) << endl;
    cout << "Minimum cost for \"" << str4 << "\": " << findMinimumCost(str4) << endl;

    return 0;
}

