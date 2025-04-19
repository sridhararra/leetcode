#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int helper(vector<int>nums){
    int maxi=1;
    unordered_set<int> st;

    if(nums.size()==0)
        return 0;
    for(auto v:nums)
        st.insert(v);

    for(auto x:st){
        if(st.find(x-1)==st.end()){
            int count=1;
            while(st.find(x+1)!=st.end()){
                count++;
                x++;
            }
            maxi=max(maxi, count);
        }
    }
    return maxi;
}
int main(){
    vector<int>num={1, 9, 3, 10, 4, 20, 2};

    int ret = helper(num);
    cout<<ret<<endl;
    return 0;
}
