/*
output:
       1234554321
       1234**4321
       123****321
       12******21
       1********1
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;
    while(row<= n) {

        //1st triangle print
        int col =1;
        while(col<=n-row+1) {
            cout <<col;
            col=col+1;
        }

        //2nd triangle print
        col =1;
        while(col<=2*row-2) {
            cout<<"*";
            col=col+1;
        }

        //3rd triangle print
        col =n-row+1;
        while(col>=1) {
            cout<<col;
            col=col-1;
        }

        cout<<endl;
        row=row+1;
    }
}

