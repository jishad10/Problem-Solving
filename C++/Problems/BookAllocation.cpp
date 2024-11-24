#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;

    for(int i = 0; i < n; i++)
    {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e)
    {
        if(isPossible(arr, n, m, mid))
        {//cout<<" Mid returned TRUE" << endl;

            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;

    cout << "Enter the number of students: ";
    cin >> m;

    vector<int> arr(n);
    cout << "Enter the number of pages in each book: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = allocateBooks(arr, n, m);
    if(result == -1) {
        cout << "It is not possible to allocate books.\n";
    } else {
        cout << "The minimum number of pages that the maximum-reading student will have to read is: " << result << endl;
    }

    return 0;
}
