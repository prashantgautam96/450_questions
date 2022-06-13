// You are given an array ‘A’ of length ‘N’ consisting only of positive integers and an integer ‘K’. You have to update every element of the array by increasing or decreasing its value by ‘K’ only once. Your task is to minimize the difference between maximum and minimum elements of the array after performing the increment or decrement on every element of the array.
// Note: After the operation, every value of the array should remain non-negative.

#include <bits/stdc++.h>
int minimizeIt(vector<int> A, int K)
{
	// Write your code here.
    int n= A.size();
    sort(A.begin(),A.end());
    
    int ans = A[n-1]-A[0];
    int  smallest  = A[0]+K;
    int largest =  A[n-1]-K;
    int mi,ma;
    for(int i=0;i<n-1;i++){
        mi = min(smallest,A[i+1]-K);
        ma = max(largest,A[i]+K);
        if(mi>0){
        ans = min(ans,ma-mi);
        }
    }
    return ans;
}
