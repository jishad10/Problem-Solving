#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBrackets(string &s) {

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else {
            // ch is either ')' or a lowercase letter
            if (ch == ')')
            {
                bool isRedundant = true;

                while (!st.empty() && st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (!st.empty())
                {
                    st.pop(); // Pop the '('
                }

                if (isRedundant)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    string expression1 = "(a+b)";
    string expression2 = "((a+b))";  // Redundant brackets
    string expression3 = "(a+(b*c))";
    string expression4 = "((a+b)*(c/d))";  // No redundant brackets

    cout << "Expression: " << expression1 << " -> "
         << (findRedundantBrackets(expression1) ? "Redundant" : "Not Redundant") << endl;

    cout << "Expression: " << expression2 << " -> "
         << (findRedundantBrackets(expression2) ? "Redundant" : "Not Redundant") << endl;

    cout << "Expression: " << expression3 << " -> "
         << (findRedundantBrackets(expression3) ? "Redundant" : "Not Redundant") << endl;

    cout << "Expression: " << expression4 << " -> "
         << (findRedundantBrackets(expression4) ? "Redundant" : "Not Redundant") << endl;

    return 0;
}

