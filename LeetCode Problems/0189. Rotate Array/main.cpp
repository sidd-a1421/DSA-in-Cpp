#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());

        return nums;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    vector<int> result = sol.rotate(nums, k);

    for(auto it : result) cout << it << " ";

    return 0;
}