#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n){
        while(n>=3){

            if(n%3!=0)
            {
                return false;
            }
            n = n/3;
        }
        return n==1;
    }
};

int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    Solution sol;
    int result =sol.isPowerOfThree(n);
    if(result){
        cout<<n<<" is a power of three."<<endl;
    } else{
        cout<<n<<" is not a power of three."<<endl;
    }
    return 0;
}

