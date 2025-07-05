#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        //use vector instead of unordered_map 
        vector<int> freq(501, 0);
        int maxi = -1;
        for(int i = 0; i < arr.size(); i++) freq[arr[i]]++;
        for(int i = 0; i < arr.size(); i++){
            if(freq[arr[i]] == arr[i]) maxi = max(maxi, freq[arr[i]]);
        }
        return maxi;
    }
};

int main() {

    Solution sol;

    vector<int> arr = {2,2,3,4};

    int result = sol.findLucky(arr);

    cout << result << endl;

    return 0;
}