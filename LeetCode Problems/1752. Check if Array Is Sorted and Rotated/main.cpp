#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] < nums[i-1]) cnt++;
        }
        if(nums[n-1] > nums[0]) cnt++;

        return cnt<=1;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {3,4,5,1,2};

    bool result = sol.check(nums);

    cout << result << endl;

    return 0;
}