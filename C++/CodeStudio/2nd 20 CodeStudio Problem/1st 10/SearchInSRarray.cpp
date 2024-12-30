#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int key = 3;

    int pivot = getPivot(arr, n);

    int result = -1;
    if (key >= arr[pivot] && key <= arr[n - 1]) {
        // Search in the second part of the array
        result = binarySearch(arr, pivot, n - 1, key);
    } else {
        // Search in the first part of the array
        result = binarySearch(arr, 0, pivot - 1, key);
    }

    //Output the result
    if (result != -1) {
        cout << "Element " << key << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }
    return 0;
}

