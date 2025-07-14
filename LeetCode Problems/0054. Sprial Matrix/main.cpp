#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();
        int top = 0, bottom = row-1, left = 0, right = col-1;

        while(left <= right && top <= bottom){
            //right
            for(int i = left; i <= right; i++) ans.push_back(matrix[top][i]);
            top++;

            //bottom
            for(int i = top; i <= bottom; i++) ans.push_back(matrix[i][right]);
            right--;

            if(top <= bottom){
                //left
                for(int i = right; i >= left; i--) ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            if(left <= right){
                //top
                for(int i = bottom; i >= top; i--) ans.push_back(matrix[i][left]);
                left++;
            }
        }
        
        return ans;
    }
};

int main() {

    Solution sol;

    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

    vector<int> result = sol.spiralOrder(matrix);

    for(auto it : result) cout << it << " ";

    return 0;
}