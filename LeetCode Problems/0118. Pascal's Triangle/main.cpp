#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n = numRows;

        for(int i = 0; i < n; i++){
            vector<int> helper;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i) helper.push_back(1);
                if(j > 0 && j < i){
                    int sum = ans[i-1][j-1] + ans[i-1][j];
                    helper.push_back(sum);
                }
            }
            ans.push_back(helper);
        }
        return ans;
    }
};

int main() {

    Solution sol;

    int numRows = 5;

    vector<vector<int>> result = sol.generate(numRows);

    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}