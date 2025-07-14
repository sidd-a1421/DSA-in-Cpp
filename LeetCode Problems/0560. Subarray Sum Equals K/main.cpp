#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), cnt = 0;
        unordered_map<int, int> mpp;
        long long sum = 0;
        mpp[0] = 1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            long long rem = sum-k;
            cnt += mpp[rem];
            mpp[sum]++;
        }
        return cnt;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,1,1};
    int k = 2;

    int result = sol.subarraySum(nums, k);

    cout << k << endl;

    return 0;
}