/*
logic hocce 2^0 theke 2^30 porjonto er value er sathe n er value
check korte thakbo
*/
#include <iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    bool isPowerOfTwo(int n){
        for(int i = 0; i<=30; i++){

            int ans = pow(2,i);
            if (ans == n)
            {
               return true;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    Solution sol;
    bool result = sol.isPowerOfTwo(n);
    if(result){
        cout<<n<<" is a power of two."<<endl;
    }else {
        cout<<n<<" is not a power of two."<<endl;
    }
    return 0;
}

