#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(vector <int> &arr , vector<int> &output , int index) {

  if(index == arr.size()) {
    for(auto num : output) {
      cout << num << " ";
      cout << endl;  
    }
  }

  output.push_back(arr[index]);
  printSubsequence(arr,output,index+1);

  output.pop_back();
  printSubsequence(arr,output,index+1);

}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter numbers: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> output;
  cout << "All Subsequences are:" << endl;
  printSubsequence(arr, output, 0);

  return 0;
}
 