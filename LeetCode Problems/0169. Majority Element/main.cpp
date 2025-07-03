#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Optimal Algo - Boyer–Moore majority vote algorithm
        int n = nums.size();
        int ele = nums[0], cnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == ele) cnt++;
            else cnt--;
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
        }
        return ele;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {3,2,3};

    int result = sol.majorityElement(nums);

    cout << result << endl;

    return 0;
}