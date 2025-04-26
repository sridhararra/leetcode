/***********************************************************
 *  Problem    : 
 Given two integers r and c, return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.


 In Pascal's triangle:

 The first row has one element with a value of 1.
 Each row has one more element in it than its previous row.
 The value of each element is equal to the sum of the elements directly above it when arranged in a triangle format.

Input: r = 4, c = 2
Output: 3

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

int pascalTriangleI(int r, int c){
    int res=1;

    for(int i = 0;i<c;i++){
        res=res*(r-i);
        res=res/(i+1);
    }
    return res;
}

int main(){
    int r = 5; int c = 3;
    int res;

    res = pascalTriangleI(r-1, c-1);
    cout<<res<<endl;
    return 0;
}
