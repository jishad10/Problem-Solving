/*
output:
      ABCD
      BCDE
      CDEF
      DEFG
*/
//basic i+j-1=1; so 1 er poriborte A ante hobe
//so 'A'+i+j-1=1+'A'


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){

        int col=1;
        while(col<=n){
            char ch ='A'+row+col-2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
