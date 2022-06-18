/*
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.
*/

// isuue_
/*
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
 
    

set<vector<int> > set_of_vectors;
vector<vector<int>> res;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){
               if(arr[i]+arr[j]+arr[k]==K){
//                    unordered_set<int> res;
                   vector<int> temp;
                   temp.push_back(arr[i]);
                   temp.push_back(arr[j]);
                   temp.push_back(arr[k]);
                   set_of_vectors.insert(temp);
                   
               }
       
   }
   }
   }
    for (auto it = set_of_vectors.begin();
         it != set_of_vectors.end();
         it++) {
  
        res.push_back(*it);
    }
  
    return res;
	
}
*/
/*
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    
    for(int i=0;i<n-2;i++){
        
        if(i==0 || arr[i]!=arr[i-1]){
            int low= i+1,high= arr.size()-1,sum=K-arr[i];
            
            while(low<high){
                if(arr[low]+arr[high]==sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[low]);
                    temp.push_back(arr[high]);
                    res.push_back(temp);
                    
                    while(low<high && arr[low]==arr[low+1]){
                        low++;
                    }
                     while(low<high && arr[high]==arr[high-1]){
                        high++;
                    }
                    low++;
                    high--;
                }
                else if(arr[low]+arr[high]<sum){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return res;
    }
}
*/

