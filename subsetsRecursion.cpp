#include<iostream>
#include<vector>
using namespace std;

class Solution {
private: 
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }

        // exclude 
        solve(nums,output,index+1,ans);

        // inlcude 
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector <int> output;

        solve(nums,output,0,ans);

        return ans;
    }

    int main(int argc, char const *argv[])
    {
        vector<int> arr;
        vector<vector<int>> a = subsets(arr);
        return 0;
    }
    
};