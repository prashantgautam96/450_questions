// 1)sort the array using sort function with O(nlogn)
// 2)do hasing & then run loop to fill based on the value
// 3) use this thing 

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    
   int low = 0;
   int mid = 0;
   int high = n-1;
    
    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[mid++],arr[low++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high--]);
                break;
                
        }
    }
    
    
}
