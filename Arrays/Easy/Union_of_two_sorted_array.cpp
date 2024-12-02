/* 

Brute Force: We use two loops to compare both arrays. Take the extra array of any size of array_1 or array_2 and initialize it with 0. 
             Now, iterate through both arrays and check whether corrosponding elements are present or not in both arrays.
            if its present mark the extra array which was initialized with 0 to 1. Make sure to break the j loop if elemet is greater
            TC: O(n1xn2)
            SC: O(n2)


Optimal Approach: Take two pointer pointing to both the arrays. Compare the array elements and push the min into a result array.
                TC: O(n1+n2)
                SC: O(n) for returning the answer otherwise not


 */

#include <bits/stdc++.h>
using namespace std;

void IntersectionOfTwoSortedArray(int *arr_1, int *arr_2, int arr_size_first ,int arr_size_second)
{
  vector<int> unionArr;

  int i=0;
  int j=0;

/* This while loop will run untill or till one array gets exhausted if they're not equal */
  while(i<arr_size_first && j<arr_size_second){

        if(arr_1[i]<arr_2[j]){
            i++;
        }
       else if(arr_1[i]>arr_2[j]){
            j++;
        }

        else {
            unionArr.push_back(arr_1[i]);
            i++;
            j++;
        }
    
  }

    for(auto it : unionArr){
        cout<<":"<<it<<endl;
    }
  
}

int main()
{

    int arr_1[] = {1,1, 2, 3, 4, 5, 6, 7};
    int arr_2[] = { 2, 3,3, 4, 5,7};

    int arr_size_first = sizeof(arr_1) / sizeof(arr_1[0]);
    int arr_size_second = sizeof(arr_2) / sizeof(arr_2[0]);


    IntersectionOfTwoSortedArray(arr_1, arr_2, arr_size_first, arr_size_second);

    
}