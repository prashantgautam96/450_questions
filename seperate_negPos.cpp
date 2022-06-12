// 1) first aprocah will be sort the array 
// 2)this approach is optimal


#include <bits/stdc++.h>
vector<int> separateNegativeAndPositive(vector<int> &nums){

    int n= nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            if (i != j)
                swap(nums[i], nums[j]);
            j++;
        }
    }
    return nums;
}
