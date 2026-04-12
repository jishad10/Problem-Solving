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
        // jodi ami (num & (num - 1)) == 0;  return true; bole di, taile toh power 2 it's ok but tokonie ami true pai jacchi ar er porer line golo check korte ce nah
        // amar toh 21 no line theke condition aace oi golo o toh check korte hobe tai ektu ulta trick kelchi
        // mani condition ta tokonie false return korbe jokon 0 na hoi, 
        // jodi 0 hoi that means true er porer line golo/condition e jabe, jodi 2 no line er comment er moto ko re ditam taile er porer line e jeto nah
        if((num & (num - 1))!= 0)
        {
            return false;
        }

        // power of 4 means (num-1) % 3 == 0
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
        cout<<num<<" is a power of four."<< endl;
    }else{
        cout<<num<<" is not a power of four."<<endl;
    }
    return 0;
}

