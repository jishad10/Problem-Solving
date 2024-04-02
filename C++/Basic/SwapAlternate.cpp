/*
swap alternate mani hocce pasapasi 2 ta array index ke swap kora
*/

#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

      for(int i=0; i<size; i+=2){

          if(i+1 < size)
          {
            swap(arr[i], arr[i+1]);
          }
      }
}

void printArray(int arr[], int n){

     for(int i=0; i<n; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){

    int even[6] ={3,4,7,8,9,1};
    int odd[5] ={4,6,7,3,9};

    swapAlternate(even,6);
    swapAlternate(odd,5);

    printArray(even,6);
    printArray(odd,5);

    return 0;
}
