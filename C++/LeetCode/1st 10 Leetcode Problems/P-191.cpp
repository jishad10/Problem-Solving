#include <iostream>
using namespace std;

class Solution{
public:
    int hammingWeight(int n){

        int count = 0;
        while(n!=0){
            //checking last bit
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};

int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    Solution sol;
    int result = sol.hammingWeight(n);
    cout<<"The number of '1' bits in " <<n<< " is: "<<result<< endl;
    return 0;
}
