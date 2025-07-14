#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i != j && j >= i+1){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            reverse(matrix[i].begin(), matrix[i].end());
        }
        return matrix;
    }
};

int main() {

    Solution sol;

    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

    vector<vector<int>> result = sol.rotate(matrix);

    int row = result.size(), col = result[0].size();

    cout <<"[ ";
    for(int i = 0; i < row; i++){
        cout << "[ ";
        for(int j = 0; j < col; j++){
            cout << result[i][j] << " ";
        }
        cout << "]" << " ";
    }
    cout << "]" << endl;

    return 0;
}