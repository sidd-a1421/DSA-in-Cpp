#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), cnt = 0, maxi = 0;

        for(int i = 0; i < n; i++){

            if(nums[i]) cnt++;

            maxi = max(maxi, cnt);

            if(nums[i] != 1) cnt = 0;

        }

        return maxi;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,1,0,1,1,1};

    int result = sol.findMaxConsecutiveOnes(nums);

    cout << result << endl;

    return 0;
}