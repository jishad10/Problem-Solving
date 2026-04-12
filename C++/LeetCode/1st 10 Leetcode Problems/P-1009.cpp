#include <iostream>
using namespace std;

class Solution{
public:
    int bitwiseComplement(int n) {

        int m = n;
        int mask = 0;

        // Edge case
        if(n==0)
        {
            return 1;
        }

        // Build the mask
        while(m!=0)
        {
            m = m>>1; // m 0 na howa porjonto right shift marbo(mani jodi m 1st e 0000..101 theke jodi 3 bar shift mari taile toh sob 0 hoi e jabe) bcz er upor depend kortheche loop koi bar cholbe 
            mask =(mask<<1) | 1; // then every time left shift marbo 1 add korbo 
        }

        int ans = (~n)&mask;
        return ans;
    }
};

int main() {
    Solution sol;
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int complement = sol.bitwiseComplement(n);
    cout<<"Bitwise complement: "<<complement<< endl;
    return 0;
}

