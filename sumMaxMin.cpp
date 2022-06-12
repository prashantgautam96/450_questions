// an efficient approach to this problem will be using a max heap or the min heap


#include <algorithm>
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    
    //     O(nlogn)-->O(n)
    int min= arr[0];
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
        
    }
    
//  time complexity in o(nlogn)
    return min +max;
}
