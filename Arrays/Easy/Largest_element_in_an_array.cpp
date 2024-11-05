/* 

Find the largest element in the array
Approach: There is brute and optimal approach to solve this problem.

Brute: Sort an array which will take TC of O(nlogn), then take the last index which indicate the presence of largest element in the array

Optimal: Take a variable with smallest value and traverse it throughout the array and update it if any value in array occurs greater than this,
         This will take O(N) TC

 */



#include <bits/stdc++.h>
using namespace std;

int largest=INT_MIN;

// Optimal Approach Force
int LargestElementInArray(int *arr, int arr_size){
    
    for(int i=0;i<arr_size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    return largest;
}

int main(){
    
    int arr[]={1, 8, 2, 30, 4, 6};
    int arr_size=sizeof arr/sizeof arr[0];

    int result=LargestElementInArray(arr, arr_size);
    cout<<"Largest Element in the array: "<<result;

}