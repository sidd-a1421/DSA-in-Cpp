#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size(), maxi = INT_MIN, currMaxi = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxi = max(maxi, (currMaxi - nums[i]));
            currMaxi = max(currMaxi, nums[i]);
        }
        return maxi <= 0 ? -1 : maxi;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {7,1,5,4};

    int result = sol.maximumDifference(nums);

    cout << result << endl;

    return 0;
}