

#include <bits/stdc++.h>
using namespace std;

int IsArraySorted(int *arr, int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {

        if (arr[i + 1] >= arr[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int arr[] = {1, 2, 2, 1, 3};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = IsArraySorted(arr, arr_size);

    cout << " Is Array Sorted " << result;
}