//Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.


void reverseArray(vector<int> &arr , int m)
{
    int n= arr.size();
	// Write your code here.

   int start = m+1;
    int end = n-1;
    while(start<end){
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    
}
