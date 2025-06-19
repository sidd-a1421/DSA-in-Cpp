#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged_array;
        double median;
        int pos;

        for(int i = 0; i < nums1.size(); i++) merged_array.push_back(nums1[i]);
        for(int i = 0; i < nums2.size(); i++) merged_array.push_back(nums2[i]);

        sort(merged_array.begin(), merged_array.end());

        if(merged_array.size() % 2){
            pos = (merged_array.size()-1) / 2;
            median = merged_array[pos];
            
            return median;
        }
        else{
            pos = merged_array.size() / 2;
            median = merged_array[pos] + merged_array[pos - 1];

            return median / 2;
        }
    }
};

int main() {

    Solution sol;

    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};

    double result = sol.findMedianSortedArrays(nums1, nums2);

    cout << result << endl;

    return 0;
}