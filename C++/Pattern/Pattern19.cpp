/*
output:
           1
          121
         12321
        1234321
       123454321
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;
    while(row<=n){

        //space print
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }

        //1st triangle print
        int col =1;
        while(col<=row) {
            cout <<col;
            col=col+1;
        }

        //2nd triangle print
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }

        cout<<endl;
        row=row+1;
    }
}


