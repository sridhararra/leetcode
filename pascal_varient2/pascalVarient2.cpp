/***********************************************************
 *  Problem    : 
 Given an integer r, return all the values in the rth row (1-indexed) in Pascal's Triangle in correct order.


 In Pascal's triangle:

 The first row has one element with a value of 1.
 Each row has one more element in it than its previous row.
 The value of each element is equal to the sum of the elements directly above it when arranged in a triangle format.

Examples:

Input: r = 4

Output: [1, 3, 3, 1]
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

int printPascalRow(int r, int c){
    int res=1;
    for(int i = 0;i<c;i++){
        res=res*(r-i);
        res=res/(i+1);

    }
    return res;
}

vector<int> pascalTriangleII(int r) {
    vector<int>ans;

    for(int i = 1;i<=r;i++){
        ans.push_back(printPascalRow(r-1,i-1));

    }
    return ans;
}

int main(){
    int r =4;

    vector<int> vt;

    vt=pascalTriangleII(r);
    for(auto vec:vt)
        cout<<vec<<" ";
    return 0;
}
