#include<iostream>
using namespace std;

//ey khane update function er array update korle main function er tao update hoi jai
//bcz main function array ta ke di di nai dichi array er address tai update function e update korle main e update hoi e jai

void updateArray(int arr[], int n){

     cout<<"from function" <<endl;

     arr[0] = 120;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
     }

     cout<<"from function end" <<endl;
}


int main(){

  int arr[5] = {1,3,4,5,6};

  updateArray(arr,5);

  cout<<"from main function" <<endl;
  for (int i=0; i<5; i++){
    cout<<arr[i]<<endl;
  }
}
