/* 

LC_283: 

Brute Force: In this approach, we iterate through the array and take out the non-zero elements and put them into a new extra array
            then, we place them into the original array and replace the remaining elements with zeros
        TC: O(n) for iterating array + O(x) for putting the non-zero element back into the array + O(n-x) for zeros
        SC: O(x) for non-zero elements (O(n) for worst case if all element are non-zero )

Optimal Approach: Two pointer approach we use for optimal approach, we iterate through the array and replace the non-zero element with zero and increment the taken integer by one place.
                    TC: O(n)
                    SC: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

void MoveZerosToEnd(int *arr, int arr_size)
{
    int first=0;

    for (int i = 0; i < arr_size; i++)
    {

        if(arr[i]!=0){
            int temp = arr[first];
            arr[first]=arr[i];
            arr[i]=temp;
            first++;
        }
    }
  
}

int main()
{

    int arr[] = {0,1,0, 0,3,12};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    MoveZerosToEnd(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
    {

        cout << " "<< arr[i];
    }
}