#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n = nums.size(), mini = INT_MAX;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i++){
            mini = min(mini, nums[i] - nums[i-1]);
        }

        return mini;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,3,2,4};

    int result = sol.findValueOfPartition(nums);

    cout << result << endl;

    return 0;
}