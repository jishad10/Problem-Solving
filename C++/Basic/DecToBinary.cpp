/*
5 er binary from 101 kmne 101 theke 5 anbo? first e ans=0
ans = 1*10^0+ 0 =1
ans = 0*10^1 + 1=1
ans = 1*10^2 +1 =101
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

     int n;
     cin>>n;

     int ans =0;
     int i =0;
     while(n!=0){

        int bit = n&1;  //binary from er least significant bit er sathe gon hobe
        ans = (bit * pow(10,i))+ans; //binary from ta read ko re ko re ans e raktechi

        n=n>>1; //right shift
        i++;
     }

     cout<<"Answer is : "<<ans<<endl;
}


