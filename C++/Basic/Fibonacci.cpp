/*
fibonacci series 0,1,1,2,3,5,8,13,21,34,55,89
1st 2 ta add korle er porer ta ase...
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){

        int nextNumber =a+b;
        cout<<nextNumber<<" ";

        //exchange
        a=b;
        b=nextNumber;
    }
}
