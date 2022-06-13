// You are given N number of intervals, where each interval contains two integers denoting the start time and the end time for the interval.
// The task is to merge all the overlapping intervals and return the list of merged intervals sorted by increasing order of their start time.
// Two intervals [A,B] and [C,D] are said to be overlapping with each other if there is at least one integer that is covered by both of them.

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{   // Write your code here.
    vector<vector<int>> mergedIntervals;
    if(intervals.size()==0){
        return mergedIntervals;
    }
    
    sort(intervals.begin(),intervals.end());
    
    vector<int> tempInterval = intervals[0];
    for(auto it:intervals){
        if(it[0]<= tempInterval[1]){
            tempInterval[1]=max(it[1],tempInterval[1]);
            
        }
        else{
            mergedIntervals.push_back(tempInterval);
            tempInterval = it;
        }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}
