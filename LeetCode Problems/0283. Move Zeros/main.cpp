#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int index = 0;
        int n = nums.size();

        for(int i = 1; i < n; i++){
            if(nums[index]) index++;
            if(nums[i] != nums[index]){
                swap(nums[i], nums[index]);
                index++;
            }
        }

        return nums;
    }
};


int main() {

    Solution sol;

    vector<int> nums = {0,1,0,3,12};

    vector<int> result = sol.moveZeroes(nums);

    for(auto it : result) cout << it << " ";

    return 0;
}