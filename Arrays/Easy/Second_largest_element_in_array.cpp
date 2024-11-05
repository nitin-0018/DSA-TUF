/* 

Find the second largest element in the array
Approach: There is brute, better, and optimal approach to solve this problem.

Brute: Sort an array which will take TC of O(nlogn), then traverse from back and check for the second largest element which might take O(N) TC in worst case if element is not found

Better: Make two passes, in the first pass, find the largest element which will take TC of O(N). In the second pass, traverse the array and check for the second largest element which will take TC of O(N)

Optimal: In this solution, we can find the second largest element with only one pass
 
*/



#include <bits/stdc++.h>
using namespace std;

int largest=1;
int secondLargest=INT_MIN;

// Optimal Approach Force
int SecondLargestElementInArray(int *arr, int arr_size){
    
    for(int i=0;i<arr_size;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }

        if(arr[i]!=largest && arr[i]> secondLargest){
            secondLargest=arr[i];
        }

    }

    return secondLargest;
}

int main(){
    
    int arr[]={1, 8, 2, 30, 4, 16};
    int arr_size=sizeof arr/sizeof arr[0];

    int result=SecondLargestElementInArray(arr, arr_size);
    cout<<"Second Largest Element in the array: "<<result;

}