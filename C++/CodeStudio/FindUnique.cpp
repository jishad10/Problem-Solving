/*
logic hocce index er sob golo value ke xor korbo karon 2 ta
same asle 0 output  same na asle oi value tai theke jabe
mani 1^2^3^4...^1 so
//logic hocce xor kora bcz a^a=0 and 0^a =a
//mani same value xor korle 0 ase 0 er sathe diff value ta xor korley oi tai asbe
*/

#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans =0;

    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[5] ={1,2,1,2,5};

    int uniqueElement = findUnique(arr, 5);
    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}

