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
        while(m!=0){
            mask =(mask<<1) | 1;
            m = m>>1; //binary er modde jey khan theke 1 soro sey toko porjonto 1 hobe ...baki golo 0 hobe
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

