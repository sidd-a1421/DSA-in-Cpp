#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++) sum ^= nums[i];

        return sum;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {2,2,1};

    int result = sol.singleNumber(nums);

    cout << result << endl;

    return 0;
}