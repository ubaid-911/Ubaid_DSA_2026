#include <iostream>
using namespace std;

void marge(int arr1[] , int n, int arr2[] , int m , int arr3[]) {

    int i=0 , j=0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n) {
        arr3[k++] = arr1[i++];
    }
    while(j<m) {
        arr3[k++] = arr2[j++];
    }

}

void print(int ans[] , int n) {
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={};

    marge(arr1, 5 , arr2, 3 , arr3);

    print(arr3, 8);


return 0;
}
/*

arr1 = {1, 3, 5, 7, 9}   → size = 5
arr2 = {2, 4, 6}         → size = 3
arr3 = {}                → empty array of size 8


Initial values:
i = 0, j = 0, k = 0

1st iteration:

                i = 0, j = 0, k = 0
                arr1[i] = 1, arr2[j] = 2

                if (arr1[i] < arr2[j])
                    1 < 2 ---> true

                condition: arr3[k++] = arr1[i++]
                          arr3[0] = 1
                          i = 1, k = 1

2nd iteration:

                i = 1, j = 0, k = 1
                arr1[i] = 3, arr2[j] = 2

                if (arr1[i] < arr2[j])
                    3 < 2 ---> false

                condition: arr3[k++] = arr2[j++]
                          arr3[1] = 2
                          j = 1, k = 2

3rd iteration:

                i = 1, j = 1, k = 2
                arr1[i] = 3, arr2[j] = 4

                if (arr1[i] < arr2[j])
                    3 < 4 ---> true

                condition: arr3[k++] = arr1[i++]
                          arr3[2] = 3
                          i = 2, k = 3

4th iteration: 

                i = 2, j = 1, k = 3
                arr1[i] = 5, arr2[j] = 4

                if (arr1[i] < arr2[j])
                    5 < 4 ---> false

                condition: arr3[k++] = arr2[j++]
                          arr3[3] = 4
                          j = 2, k = 4

5th iteration:

                i = 2, j = 2, k = 4
                arr1[i] = 5, arr2[j] = 6

                if (arr1[i] < arr2[j])
                    5 < 6 ---> true

                condition: arr3[k++] = arr1[i++]
                          arr3[4] = 5

6th iteration:
                i = 3, j = 2, k = 5
                arr1[i] = 7, arr2[j] = 6

                if (arr1[i] < arr2[j])
                    7 < 6 ---> false

                condition: arr3[k++] = arr2[j++]
                          arr3[5] = 6
                          j = 3, k = 6

                now: j = 3 -> loop ends
                (arr2 is exhausted, copy remaining of arr1)

Remaining from arr1:
                 i = 3, k = 6

                 arr3[6] = arr1[3] = 7
                 i = 4, k = 7

                 arr3[7] = arr1[4] = 9
                 i = 5, k = 8


                 Final arr3[8]:
                arr3[8] = {1, 2, 3, 4, 5, 6, 7, 9}

        


*/