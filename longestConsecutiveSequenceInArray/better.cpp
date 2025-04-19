/*
 *
 * Given an array nums of n integers, return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.
Examples:

Input: nums = [100, 4, 200, 1, 3, 2]

Output: 4

Explanation: The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.

Input: nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]

Output: 9

Explanation: The longest sequence of consecutive elements in the array is [0, 1, 2, 3, 4, 5, 6, 7, 8], which has a length of 9. 

Input: nums = [1, 9, 3, 10, 4, 20, 2]
Output:
4

*/

/* Better Approach */
// Sridhar Arra


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int helper(vector<int>input){
    int maxi=1;
    int count=1;

    if(input.size()==0)
        return 0;
    sort(input.begin(),input.end());

    for(size_t i = 1;i<input.size();i++){
        if(input[i]!=input[i-1]){
            if(input[i]-input[i-1]==1){
                count++;
            }
            else{
                maxi=max(maxi, count);
                count=1;
            }

        }
    }

    maxi=max(maxi, count);

    return maxi;
}

int main(){
    vector<int>nums={1, 9, 3, 10, 4, 20, 2};

    int ret = helper(nums);
    cout<<ret<<endl;
    return 0;
}
