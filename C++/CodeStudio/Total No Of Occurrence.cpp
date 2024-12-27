#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int even[12] = {1,2,2,3,3,3,3,3,3,3,4,5};

    int firstIndex = firstOcc(even, 12, 3);
    int lastIndex = lastOcc(even, 12, 3);

    cout<<"First Occurrence of Index : "<<firstIndex<<endl;
    cout<<"Last Occurrence of Index : "<<lastIndex<<endl;

    if (firstIndex == -1 || lastIndex == -1) {
        cout << "Element not found." << endl;
    } else {
        int totalOccurrences = lastIndex - firstIndex + 1;
        cout << "Total number of occurrences of " << totalOccurrences << endl;
    }

    return 0;
}

