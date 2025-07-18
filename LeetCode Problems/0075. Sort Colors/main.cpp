#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag Algorithm
        
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) mid++;
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        for(auto it : nums) cout << it << " ";
    }
};

int main() {

    Solution sol;

    vector<int> nums = {2,0,2,1,1,0};

    sol.sortColors(nums);

    return 0;
}