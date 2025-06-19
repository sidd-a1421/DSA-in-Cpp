#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[index]) {
                index++;
                nums[index] = nums[i];
            }
        }

        return index+1;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {1,1,2};

    int result = sol.removeDuplicates(nums);

    cout << result << endl;

    return 0;
}