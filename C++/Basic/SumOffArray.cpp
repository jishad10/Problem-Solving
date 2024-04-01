#include<iostream>
using namespace std;

int sumArr(int arr[],int n){

    int sum =0;

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int size;
    cout<<"Enter a size : "<<endl;
    cin>>size;

    int num[100];

    cout<<"Enter array value :"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>num[i];
    }

    cout<<"The sum of all the elements in the array is: "<<sumArr(num,size)<< endl;

    return 0;
}
