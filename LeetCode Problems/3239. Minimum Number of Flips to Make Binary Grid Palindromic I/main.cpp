#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int check(vector<int> nums){
        int n = nums.size();
        int i = 0, j = n-1;
        int cnt = 0;

        while(i < j){
            nums[i] != nums[j] ? cnt++ : cnt += 0;
            i++;
            j--;
        }
        return cnt;
    }
    int minFlips(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int rowCnt = 0, colCnt = 0;

        for(int i = 0; i < row; i++){
            vector<int> copy(grid[i].begin(), grid[i].end());
            rowCnt += check(copy);
        }

        for(int i = 0; i < col; i++){
            vector<int> copy;

            for(int j = 0; j < row; j++){
                copy.push_back(grid[j][i]);
            }

            colCnt += check(copy);
        }
        return min(rowCnt, colCnt);
    }
};

int main() {

    Solution sol;

    vector<vector<int>> nums = {{1,0,0},{0,0,0},{0,0,1}};

    int result = sol.minFlips(nums);

    cout << result << endl;

    return 0;
}