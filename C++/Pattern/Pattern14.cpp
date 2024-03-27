/*
output:
       A
       B C
       C D E
       D E F G
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        int col=1;
        char value ='A'+row-1;
        while(col<=row){
            cout<<value<<" ";
            value =value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
