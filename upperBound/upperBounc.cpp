/***********************************************************
 *  Problem    : 
 Given a sorted array of nums and an integer x, write a program to find the upper bound of x. The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than a given key i.e. x.

 If no such index is found, return the size of the array.
Examples:

Input : n= 4, nums = [1,2,2,3], x = 2

Output:3
 *  Difficulty : 
 *  Link       : https://leetcode.com/problems/
 *  Author     : Sridhar Arra
 *  Language   : C++
 *  Time Complexity : 
 *  Space Complexity: 
 ***********************************************************/
#include<iostream>
#include<vector>

using namespace std;

int upperBound(vector<int> &nums, int x){
    int low=0;
    int high = nums.size()-1;
    int ans = nums.size();
    while(low<=high){
        int mid = low+(high-low)/2;

        if(nums[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans; 
}

int main(){

    vector<int>nums={1,2,2,3};
    int x = 2;

    int res;
    res=upperBound(nums, x);
    cout<<res<<endl;
    return 0;
}
