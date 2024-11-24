#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for(int i = 0; i < n-1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n - i; j++)
        {
            // Process elements till n-i th index
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(swapped == false) {
            // Already sorted
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

