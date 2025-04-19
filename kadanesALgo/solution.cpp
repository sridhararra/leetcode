/***********************************************************
 *  Problem    : Given an integer array nums, find the subarray
 *  with the largest sum and return the sum of the elements
 *  present in that subarray. A subarray is a contiguous
 *  non-empty sequence of elements within an array.
 *  
 *  Difficulty : 
 *  Link       : https://takeuforward.org/plus/dsa-concept-revision/day-1/kadane's-algorithm
 *  Author     : Sridhar Arra
 *  Language   : C++
 *  Time Complexity : 
 *  Space Complexity: 
 ***********************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;


int findLar(vector<int>num){
    int maxi = INT_MIN;
    int sum=0;

    for(auto x:num){
        sum=sum+x;
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;

        }

    }
    return maxi;
}
int main(){
    vector<int> nums={-1, 2, 3, -1, 2, -6, 5};

    int ret = findLar(nums);
    cout<<ret<<endl;
    return 0;
}
