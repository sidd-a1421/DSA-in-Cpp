#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            if(mpp.count(target - nums[i])) return {mpp[target - nums[i]], i};
            mpp[nums[i]] = i;
        }
        return {};
    }
};

int main() {

    Solution sol;

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    for(auto it : result) cout << it << " ";

    return 0;
}