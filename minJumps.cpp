int minimumJumps(vector<int> &arr, int n)
{
//     // write your code here
//     int count=0;
    
//     int i=0;
//     while(i<n-1){
//         if(i==n-1){
//           return count;
//         }
//         if(i<=0){
//             return -1;
//         }else{
//         i=arr[i]+i;
//         count++;
//         }
// //         if(i>n-1-i)
//     }
//     return count;
    
    int maxR = arr[0];
    int step =arr[0];
    int jump= 1;
    if(n==1){
        return 0;
    }
    else if(arr[0]==0){
        return -1;
    }
    else{
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxR = max(maxR,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxR){
                    return -1;
                }
                step = maxR-i;
            }
        }
    }
    return jump;
}
