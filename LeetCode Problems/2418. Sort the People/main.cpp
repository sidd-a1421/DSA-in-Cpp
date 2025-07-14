#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        int n = heights.size();

        map<int, int, greater<int>> mpp;

        for(int i = 0; i < n; i++) mpp[heights[i]] = i;

        for(auto it : mpp){
            ans.push_back(names[it.second]);
        }
        return ans;
    }
};

int main() {

    Solution sol;

    vector<string> names = {"Mary","John","Emma"};
    vector<int> heights = {180,165,170};

    vector<string> result = sol.sortPeople(names, heights);

    for(auto it : result) cout << it << " ";

    return 0;
}