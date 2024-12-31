#include <iostream>
#include <vector>
using namespace std;

int DuplicateArray(vector<int> &arr) {
    int ans =0;

    // XOR all array elements
    for (int i =0; i<arr.size(); i++) {
        ans = ans^arr[i];
    }

    // XOR from 1 to n-1
    for (int i=1; i<arr.size(); i++) {
        ans = ans^i;
    }
    return ans;
}

int main() {
    vector<int> arr ={1, 2, 3, 4, 2};

    int duplicate = DuplicateArray(arr);
    cout<<"The duplicate element is: "<<duplicate <<endl;

    return 0;
}
