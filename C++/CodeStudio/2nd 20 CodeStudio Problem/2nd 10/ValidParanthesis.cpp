#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string expression)
{
  	 stack<char> s;
     for(int i=0; i<expression.length(); i++) {

         char ch = expression[i];

         //if opening bracket, stack push
         //if close bracket, stack-top check and pop

         if(ch == '(' || ch == '{' || ch == '[')
         {
             s.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s.empty())
             {
                 char top = s.top();
                 if( (ch == ')' && top == '(') ||
                     ( ch == '}' && top == '{') ||
                     (ch == ']' && top == '[') ) {
                      s.pop();
                 }
                 else
                 {
                     return false; // Mismatched brackets
                 }
             }
             else
             {
                 return false;
             }
         }
    }

    if(s.empty())
        return true;
    else
        return false;
}


int main()
{
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (isValidParenthesis(expression))
    {
        cout << "Valid Parentheses\n";
    }
    else
    {
        cout << "Invalid Parentheses\n";
    }

    return 0;
}
