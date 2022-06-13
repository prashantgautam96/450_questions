// Problem Statement
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice.
// Your task is to find the duplicate integer value present in the array.
// here we have 3 approaches to find the duplicates

// 1)Naive approachwill be that we run to loops and find the elements which occurs twice tc--> O(n square)
// 2)sorting & comparsion o(nlogn)+O(n)
// 2)we can do hashing or hasmap for which 

// 3) will be the below approach for which we an use pointers if any cycle is deyect then that element contains an duplicate else no.

#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
//     t= nlogn+ n
//     int n = arr.size();
//    sort(arr.begin(),arr.end());
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1]){
//             return arr[i];
//         }
//     }
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
        
    }while(slow!=fast);
    fast = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast= arr[fast];
    }
    return slow;
   
}

  
