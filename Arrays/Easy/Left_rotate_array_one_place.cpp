#include <bits/stdc++.h>
using namespace std;

void LeftRotateArrayOnePlace(int *arr, int arr_size)
{
    int temp = arr[0];
    for (int i = 0; i < arr_size; i++)
    {

        arr[i] = arr[i + 1];
    }

    arr[arr_size - 1] = temp;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int arr_size = sizeof arr / sizeof arr[0];

    LeftRotateArrayOnePlace(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        cout << " " << arr[i];
    }
}
