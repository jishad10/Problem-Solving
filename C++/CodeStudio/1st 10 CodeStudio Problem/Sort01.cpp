#include <iostream>
using namespace std;

void sortOne(int arr[], int n){
     //left=i; right=j;
     int left =0; int right = n-1;

     while(left<right){

        if(arr[left] == 0)
        {
            left++;
        }
        else if(arr[right] == 1)
        {
            right--;
        }
        else{
           swap(arr[left], arr[right]);
           left++;
           right--;
        }
     }
}

void printArray(int arr[] , int n){

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}


int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr,8);

    return 0;
}
