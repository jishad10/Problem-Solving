/*
logic hocce first e digit golo ke count korbo
then formula er maddome reverse print korbo
*/

#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

class Solution{
public:
    int reverse(int x){

        int ans = 0;
        while(x!=0){

            int digit = x%10;

            if(( ans>INT_MAX/10 ) || (ans<INT_MIN/10)) //ans ke 10 dara mul kortechi,so int_max paite hoile 10 dara div korte.........
            {
                return 0;
            }

            ans =(ans * 10)+digit;
            x = x/10;
        }
        return ans;
    }
};

int main() {
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    Solution sol;
    int reversed = sol.reverse(x);
    cout<<"Reversed integer: "<<reversed<<endl;
    return 0;
}

