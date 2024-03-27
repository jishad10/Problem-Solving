/*
output:
       D
       C D
       B C D
       A B C D
       A B C D
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        int col=1;
        char value ='A'+n-row;
        while(col<=row){
            cout<<value<<" ";
            value =value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
