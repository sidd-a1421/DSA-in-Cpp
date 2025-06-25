#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN;
        int n = nums.size();

        for(int i = 0; i < n; i++) 
        {
            sum += nums[i];
            maxi = max(sum, maxi);
            if(sum < 0) sum = 0;
        } 
        
        return maxi;      
    }
};

int main() {

    Solution sol;

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int result = sol.maxSubArray(nums);

    cout << result << endl;

    return 0;
}