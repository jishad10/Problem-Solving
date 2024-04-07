/*
logic hocce index er sob golo value ke xor korbo karon 2 ta
same asle 0 output  same na asle oi value tai theke jabe
mani 1^2^3^4...^1 so
*/

#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans = 0;

    for(int i =0; i<size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int arr[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

    int size;
    int unique = findUnique(arr, 9);

    cout<<"The unique number is : "<<unique;

    return 0;
}

