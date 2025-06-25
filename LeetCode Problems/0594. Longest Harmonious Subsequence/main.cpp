#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        //[1,2,2,2,3,3,5,7]

        int l = 0, i = 1;
        int length = 0;
        while(i < nums.size()) {
            int diff = nums[i] - nums[l];
            if(diff == 1) length = max(length, i - l + 1);
            if(diff <= 1) i++;
            else l++;
        }

        return length;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,3,2,2,5,2,3,7};

    int result = sol.findLHS(nums);

    cout << result << endl;

    return 0;
}