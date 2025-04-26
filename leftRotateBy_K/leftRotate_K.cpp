/***********************************************************
 *  Problem    : 
 Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.
Examples:

Input: nums = [1, 2, 3, 4, 5, 6], k = 2

Output: nums = [3, 4, 5, 6, 1, 2]

Explanation: rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

Input: nums = [3, 4, 1, 5, 3, -5], k = 8

Output: nums = [1, 5, 3, -5, 3, 4]

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

void reverse(vector<int>& nums, int start, int end){
    while(start<end){
        int temp;
        temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }

}
void rotateArray(vector<int>& nums, int k) {
    int sz=size(nums);
    int rotateBy=k%(sz);

    reverse(nums,0,rotateBy-1);
    reverse(nums, rotateBy, sz-1);
    reverse(nums, 0, sz-1);

    return;
}

int main(){
    vector<int>nums = {3, 4, 1, 5, 3, -5};
    int k = 8;
    rotateArray(nums, k);
    for(auto x:nums)
        cout<<x<<" ";
    return 0;
}
