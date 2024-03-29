/*
jodi kono value ke 1 theke soro ko re sey value er aag projonto
kono sokka di e bag jai/rem aase taile prime noy...
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool isPrime =1; //1st e do re nichi prime

    for(int i=2; i<n; i++){

        if(n%i ==0){
            isPrime =0; //rem asle not prime
            break;
        }
    }
    if(isPrime == 0){
        cout<<"not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }
}

