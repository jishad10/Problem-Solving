#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int num){

        if(num<=0)
        {
            return false;
        }

        // Check if number is a power of 2
        if((num & (num - 1))!= 0)
        {
            return false;
        }

        if((num - 1) % 3!=0)
        {
            return false;
        }
        return true;
    }
};

int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    Solution sol;
    int result = sol.isPowerOfFour(num);
    if(result){
        cout<<num<<" is a power of four."<<endl;
    }else{
        cout<<num<<" is not a power of four."<<endl;
    }
    return 0;
}

