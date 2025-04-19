/***********************************************************
 *  Problem    : optimal lowerBound 
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


int lowerBound(vector<int>num, int target){
    int ans=num.size();

    int low = 0;
    int high = num.size()-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;

        if(num[mid]>=target)
        {
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
    vector<int>v={1,2,3,3,4};

    cout<<lowerBound(v, 3);
    return 0;
}
