#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp)
        {
            // Shift
            arr[j + 1] = arr[j];
            j--;
        }

        // Copy temp value
        arr[j + 1] = temp;
    }
}

int main() {
    vector<int> arr = {29, 10, 14, 37, 13};
    int n = arr.size();

    cout << "Array before sorting: ";
    for(int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(n, arr);

    cout << "Array after sorting: ";
    for(int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

