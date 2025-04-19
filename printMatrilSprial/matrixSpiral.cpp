/***********************************************************
 *  Problem    : 

 Given an M * N matrix, print the elements in a clockwise spiral manner. Return an array with the elements in the order of their appearance when printed in a spiral manner.
Examples:

Input: matrix = [[1, 2, 3], [4 ,5 ,6], [7, 8, 9]]

Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]

Explanation: The elements in the spiral order are 1, 2, 3 -> 6, 9 -> 8, 7 -> 4, 5

Input: matrix = [[1, 2, 3, 4], [5, 6, 7, 8]]

Output: [1, 2, 3, 4, 8, 7, 6, 5]

Explanation: The elements in the spiral order are 1, 2, 3, 4 -> 8, 7, 6, 5


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

vector<int> printSpiralMatrix(vector<vector<int>>&mat){

    vector<int>res;
    int row=mat.size();
    int col=mat[0].size();

    int left=0, top=0;
    int right=col-1;
    int bottom=row-1;


    while (left<=right && top <= bottom) {
        for(int i = left;i<=right;i++){
            res.push_back(mat[left][i]);
        }

        top++;
        for(int i = top;i<=bottom;i++){
            res.push_back(mat[i][right]);
        }

        right--;
        if(top<=bottom) { // this checks are needed, when we print values from right to bottom
            for(int i = right;i>=left;i--){
                res.push_back(mat[bottom][i]);
            }
        }

        bottom--;
        if(left<=right){ //This check is needed when we print the values from bottom to top
            for(int i = bottom;i>=top;i--){
                res.push_back(mat[i][left]);
            }
        }
        left++;
    }
    return res;
}

int main(){
    // vector<vector<int>>matrix={{1, 2 }, {3, 4}, {5,6},{7, 8}};
    vector<vector<int>>matrix={{1,2,3,4}};
    vector<int>ans;

    ans = printSpiralMatrix(matrix);
    for(auto temp:ans)
        cout<<temp<<" ";
    return 0;
}
