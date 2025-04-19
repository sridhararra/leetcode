/***********************************************************
 *  Problem    : 
 Left Rotate Array by One

 Given an integer array nums, rotate the array to the left by one.


Note: There is no need to return anything, just modify the given array.
Examples:

Input: nums = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation: Initially, nums = [1, 2, 3, 4, 5]

Rotating once to left -> nums = [2, 3, 4, 5, 1]

Input: nums = [-1, 0, 3, 6]

Output: [0, 3, 6, -1]

Explanation: Initially, nums = [-1, 0, 3, 6]

Rotating once to left -> nums = [0, 3, 6, -1]
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

void rotate(vector<int>&nm){
    size_t sz=size(nm);
    int temp=nm[0];
    for(int i =0;i<sz-1;i++){

        nm[i]=nm[i+1];
    }
    nm[sz-1]=temp;
    return;
}
int main(){
    vector<int>nums = {1,2,3,4,5};

    rotate(nums);
    for(auto x:nums){
        cout<<x<<endl;
    }
    return 0;
}
