/* 
LC 26. Remove Duplicates from Sorted Array

Brute Force Approach: Let's declare a set data structure. Iterate through the given array and put the array elements in the set.
                    Set always maintain unique elements and TC will be O(NlogN). Then, iterate through the set and put the elements
                    into the given array. This will take O(N) in worst case if all elements are unique. SC will be O(N)


Optimal Approach: Two Pointer approach-> Use two variable to and compare the array elements with two conditions.
                    First: If elements are same then move the second variable.
                    Second: If elements are not same then place the array element in front of the array element where first varibale point to
                    TC will be O(N) and SC will be O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesFromArray(int *arr, int arr_size){

    vector<int> final_arr;
    int first=0, last=1;
    int count=0;

    while( last<arr_size){
      
        if(arr[first]!=arr[last]){
            arr[first+1]=arr[last];
            first++;
            count++;
        }
        last++;
    }

    for(int i=0;i<arr_size;i++){
        cout<<"_"<<arr[i]<<" ";
    }

    //because count=0 will ignore first element
    return count+1;
}

int main(){
    int arr[]={0,0,1,1,1,2,2,3,3,4};

    int arr_size=sizeof arr/sizeof arr[0];

    int result=removeDuplicatesFromArray(arr, arr_size);
    cout<<"result: "<<result;
}