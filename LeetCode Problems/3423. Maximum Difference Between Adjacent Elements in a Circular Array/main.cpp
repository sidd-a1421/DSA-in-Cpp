#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            if(i == n-1){
                maxi = max(maxi, abs(nums[i] - nums[0]));
                break;
            }
            maxi = max(maxi, abs(nums[i] - nums[i+1]));
        }
        return maxi;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,2,4};

    int result = sol.maxAdjacentDistance(nums);

    cout << result << endl;

    return 0;
}