/*
logic hocce 1 bar loop chalai count korbo element koi ta koi bar aace
then 2nd time count korbo count er num golo unique kina
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    bool uniqueOccurrences(vector<int>& arr){

        vector<int> ans;  //dynamic array def
        int size= arr.size();
        sort(arr.begin(), arr.end());//sorting

        int count = 1;
        for(int i=1; i<size; i++)
        {
            if(arr[i] == arr[i - 1]){
                count++;
            }
            else{
                ans.push_back(count); //count store,if diff then
                count = 1;  //count er value reset 1 theke start hobe
            }
        }
        ans.push_back(count); //final count

        //ans/count er value golo store ko re check same aace kinaa por por 2 ta
        sort(ans.begin(), ans.end());
        for(int i=1; i<ans.size(); i++)
        {
            if(ans[i] == ans[i - 1]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    vector<int> arr = {1,2, 2, 3, 3, 3};

    Solution sol;
    if(sol.uniqueOccurrences(arr))
    {
        cout<<"Unique occurrences"<<endl;
    }
    else
    {
        cout<<"Non-unique occurrences"<<endl;
    }
    return 0;
}

