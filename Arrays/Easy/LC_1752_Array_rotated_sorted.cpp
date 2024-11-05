/* 
Problem: 1752. Check if Array Is Sorted and Rotated

Approach: Find how many times, the array is breaking the ascending order.
If it is breaking just once or not even once then it is sorted so return true, otherwise false.
 
*/

#include <bits/stdc++.h>
using namespace std;

int IsArrayRotatedSorted(int *arr, int arr_size)
{
    int count=0;

    for (int i = 1; i < arr_size; i++)
    {
        //loop through 1 to last element to check the breaking orders
        if(arr[i-1]>arr[i]){
            count++;
        } 
    }
    //check first and last which wasn't covered above
    if(arr[arr_size-1]>arr[0]){
        count++;
    }

    if(count<=1){
        return true;
    }
    return false;

    
}

int main()
{

    //int arr[] = {3,4,5,1,2};
    int arr[]={2,1,3,4};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = IsArrayRotatedSorted(arr, arr_size);

    cout << " Is Array Rotated and Sorted " << result;
}