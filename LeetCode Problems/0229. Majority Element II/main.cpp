#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums;
        if(n == 2){
            if(nums[0] == nums[1]) return {nums[0]};
            else return nums;
        }

        int ele1 = nums[0], ele2 = nums[1], cnt1 = 0, cnt2 = 0;

        for(int i = 0; i < n; i++){
            if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;
            else if(!cnt1){
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(!cnt2){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;
        cnt1 = cnt2 = 0;

        for(int i = 0; i < n; i++){
            if(ele1 == nums[i]) cnt1++;
            if(ele2 == nums[i]) cnt2++;
        }

        if(cnt1 > n/3) ans.push_back(ele1);
        if(cnt2 > n/3 && ele1 != ele2) ans.push_back(ele2);

        return ans;

    }
};

int main() {

    Solution sol;

    vector<int> nums = {3,2,3};

    vector<int> result = sol.majorityElement(nums);

    for(auto it : result) cout << it << " ";

    return 0;
}