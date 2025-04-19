/***********************************************************
 *  Problem    : LowerBound implementation 
 *  Difficulty : 
 *  Link       : https://leetcode.com/problems/
 *  Author     : Sridhar Arra
 *  Language   : C++
 *  Time Complexity : 
 *  Space Complexity: 
 ***********************************************************/
#include<vector>
#include<iostream>

using namespace std;
int lowerBound(vector<int>num, int target){
    int ans=num.size();

    for(size_t i = 0;i<num.size();i++){
        if(num[i]>=target)
            return i;

    }

    return ans;
}
int main(){

    vector<int>nums={1,2,2,3};

    int res;
    res=lowerBound(nums, 2);
    cout<<res<<endl;
    return 0;
}
