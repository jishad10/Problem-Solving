/*
logic hocce digit golo ekta ekta ko re find out kora
dorlam 101 digit jodi 1 er soman hoi taile pow korbo, 0 ke ignore korbo
bcz 0 ke pow er sathe gon korle 0 aase
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

        int digit =n%10;

        if(digit==1){
            ans=ans+pow(2,i);
        }

        n =n/10;
        i++;
     }
     cout<<"Answer is : "<<ans<<endl;
}
