#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
    int s = m + 1;
    int e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m = 4;

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    reverseArray(arr, m);

    cout << "Array after reversal: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

