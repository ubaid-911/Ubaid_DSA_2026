#include <iostream>
using namespace std;

//in Rotated Sorted Array one side (left/right) is sorted correctly 
int sortedRotated(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        // Step 1: If mid is the target, return it
        if (arr[mid] == key)
        {
            return mid;
        }

        // Step 2: Check if left part is sorted
        if (arr[s] <= arr[mid])   
        {                        
            // If target is in the left sorted part
            if (arr[s] <= key && key <= arr[mid])
            {
                e = mid - 1; // Search in left half
            }
            else
            {
                s = mid + 1; // Search in right half
            }
        }

        // Step 3: Otherwise, right part is sorted 
        else
        {
            // If target is in the right sorted part
            if (arr[mid] < key && key <= arr[e])
            {
                s = mid + 1; // Search in right half
            }
            
            else
            {
                e = mid - 1; // Search in left half
            }
        }
    }
     
    // Step 4: If not found, return -1
    return -1;
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int size = 7;
    int target = 2;
    int result = sortedRotated(arr, size, target);
    cout << "Element found at index : " << result;

return 0;
}
/*

here 

s = 0
e = n - 1 --> 6
n = 7
key = 2
arr[7] = {4, 5, 6, 7, 0, 1, 2};

1st iteration : m = 0 + (6-0)/2 --> 3
                s <= e --> 0 <= 6
                
        if (arr[s] <= arr[mid])
              4  <=  7 ---(true)
    condition : s = mid + 1
                  =  3 + 1 --> 4

2nd iteration : s = 4   ,  e = 6
               mid = 4 + (5-4)/2 --> 4

        if(arr[s] <= arr[mid]) 
             0  <= 0 --> true
    condition : s = m + 1
                  = 4 + 1 --> 5

3rd iteration :s = 5  ,  e = 6
               mid = 5 + ( 6-5)/2 --> 5

         if(arr[s] <= arr[mid]) 
              1  <= 1  ---(true)

        condition : s = mid + 1;
                      = 5 + 1 --> 6

4th iteration :s = 6  ,  e = 6  
               mid = 6
         
        if(arr[s] <= arr[mid]) 
            2  <= 2 --> true
        
    condition : (arr[mid] == key)
                   2    ==  2  --> (true)
                   
                  return mid;
            
        

    


*/