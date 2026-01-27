// class Solution {
// public:
//  void solve(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int index)
//  {    
//       int n=nums.size();
//         ans.push_back(temp);
//         for(int i=index;i<n;i++)
//         {
//            if(i>index&&nums[i]==nums[i-1])
//            continue;
//            temp.push_back(nums[i]);
//            solve(nums,temp,ans,i+1);
//            temp.pop_back();
//         }
//  }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>>ans;
//         vector<int>temp;
//         solve(nums,temp,ans,0);
//         return ans;
//     }
// };






#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, vector<int>& nums,
                     vector<int>& ds, set<vector<int>>& result) {
        if (ind == nums.size()) {
            result.insert(ds);
            return;
        }

        // include
        ds.push_back(nums[ind]);
        solve(ind + 1, nums, ds, result);
        ds.pop_back();

        // exclude
        solve(ind + 1, nums, ds, result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> ds;

        sort(nums.begin(), nums.end());
        solve(0, nums, ds, result);

        return vector<vector<int>>(result.begin(), result.end());
    }
};