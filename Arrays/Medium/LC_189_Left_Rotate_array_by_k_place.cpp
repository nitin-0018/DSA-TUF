/*  LC_189_Rotate_Array

Note: After rotating the array by the times of it's size, the iteration will divided and be less than the number of elements in it
       like; d=d%n; where d is the reminder of result get from dividing d with given arr size

Brute_Force Method: We will use an extra space to contain the k elements. Then we'll rotate the array from n-k position and starts putting
                    in front of array, then we'll iterate through extra array and put the elements in the array from n-k positions till end
        TC: O(d)+O(n-d)+O(d)
        SC: O(d)

Optimal method: This is all about observation:
                1. do the first reverse of d elements
                2. do the second reverse of n-d elements
                3. do the third reverse of entire array

 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/* Brute Force */
/* void LeftRotateArrayByKPlace(int *arr, int arr_size, int d)
{
    d=d%arr_size;
    int extra_arr[d]={0};


    // Storing the d elements
    for (int i = 0; i < d; i++)
    {

        extra_arr[i] = arr[i];
    }


    // Shifting the array elements
     for (int i = d; i < arr_size; i++)
    {
        arr[i-d] = arr[i];
    }


    // merging the extra array into it

     for (int i = arr_size-d; i < arr_size; i++)
    {

        arr[i] = extra_arr[i-(arr_size-d)];
    }

} */

/* Optimal Approach */
void reverseArray(int *arr, int begin, int end)
{

    int left = begin, right = end;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
void LeftRotateArrayByKPlace(int *arr, int arr_size, int d)
{   
    d=d%arr_size;

    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, arr_size-1);
    reverseArray(arr, 0, arr_size-1);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_size = sizeof arr / sizeof arr[0];
    int d = 4;

    LeftRotateArrayByKPlace(arr, arr_size, d);

     for (int i = 0; i < arr_size; i++)
     {
         cout << " " << arr[i];
     } 
}
