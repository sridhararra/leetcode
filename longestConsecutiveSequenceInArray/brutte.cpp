/*
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
Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109

*/


/* BRUTE FORCE */
// SRIDHAR ARRA


#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>input, int num){
    for(size_t i = 0;i<input.size();i++){
        if(input[i]==num){
            return 1;
        }
    }
    return 0;
}

int helper(vector<int>ip){
    int maxi=1;
    int count=1;
    for(size_t i = 0;i<ip.size();i++){
        int x =ip[i];
        while(linearSearch(ip, x+1)){
            count++;
            x++;
        }
        maxi=max(maxi, count);
        count=1;
    }
    return maxi;
}

int main(){
    vector<int>nums={-99,-98,0,4,5,6,99,100,101, 102,103};

    int res = helper(nums);
    cout<<res<<endl;
    return 0;
}
