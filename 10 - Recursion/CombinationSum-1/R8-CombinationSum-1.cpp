#include<iostream>
#include<vector>
using namespace std;

void findCombination(vector<int> &arr, int index , vector<int> &output ,int target , vector<vector<int>> &ans ) {

    if(index == arr.size()) {
        if(target == 0) {
        ans.push_back(output);
        }
    return;
    }
    
    if (arr[index] <= target) {
        output.push_back(arr[index]);
        findCombination(arr ,index ,output ,target - arr[index] ,  ans );
        output.pop_back();
    }

    findCombination(arr ,index + 1,output ,target ,  ans );
}


int main()
{

    vector<int> arr = {2,4,5};
    int target = 8;

    vector<vector<int>> ans;
    vector<int> output;

    findCombination(arr,0, output,target,ans );

    for(auto & comb : ans) {
        for(int num : comb) {
            cout << num << " ";
        } 
        cout << endl;
    }

return 0;
}