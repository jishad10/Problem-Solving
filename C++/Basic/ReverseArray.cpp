/*
logic hocce start array value er sathe end array value swap korbo
ey ba be front er di ke jabe and end theke samne asbo...
*/

#include<iostream>
using namespace std;

void reverse(int arr[], int n){

     int start=0;
     int end =n-1;

     while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }

}

void printArray(int arr[],int n){

     for(int i=0; i<n; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){

    int arr[6]={10,45,2,5,78,9};
    int brr[5]={87,4,78,45,8};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(arr,5);

    return 0;
}
