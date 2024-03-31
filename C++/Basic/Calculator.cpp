#include<iostream>
using namespace std;

int main(){

    while(1)
    {
        int a;
        cout<<"Enter 1st value : "<<endl;
        cin>>a;

        int b;
        cout<<"Enter 2nd value : "<<endl;
        cin>>b;

        char op;
        cout<<"Enter an operation : "<<endl;
        cin>>op;

        switch(op){

          case '+':
            cout<<"The Result is : "<<(a+b)<<endl;
            break;

          case '-':
            cout<<"The Result is : "<<(a-b)<<endl;
            break;

          case '*':
            cout<<"The Result is : "<<(a*b)<<endl;
            break;

          case '/':
            cout<<"The Result is : "<<(a/b)<<endl;
            break;

         case '%':
            cout<<"The Result is : "<<(a%b)<<endl;
            break;

         default:
            cout<<"Plz enter valid num or operation"<<endl;
            break;
        }
    }
}
