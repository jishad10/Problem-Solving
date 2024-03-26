/*
output:
      AAA
      BBB
      CCC
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){

        int col =1;
        while(col<=n) {
            char ch ='A' +row-1; //typecasting
            cout<<ch;
            col =col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
