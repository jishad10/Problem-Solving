#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int low =0, mid =0, high =n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i =0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[10] = {1, 0, 2, 1, 0, 2, 1, 0, 2, 1};

    sort012(arr, 10);
    printArray(arr, 10);

    return 0;
}
