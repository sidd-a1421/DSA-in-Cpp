#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        int col0 = 1;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(!matrix[i][j]){
                    matrix[i][0] = 0;

                    if(j) matrix[0][j] = 0;
                    else col0 = 0;
                }
            }
        }

        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }

        if(!matrix[0][0])
            for(int j = 0; j < col; j++) matrix[0][j] = 0;        

        if(!col0)
            for(int i = 0; i < row; i++) matrix[i][0] = 0;

        cout << "[";
        for(int i = 0; i < row; i++){
            cout << "[ ";
            for(int j = 0; j < col; j++){
                cout << matrix[i][j] << " ";
            }
            cout << "] ";
        }
        cout << "]";
    }
};

int main() {

    Solution sol;

    vector<vector<int>> matrix = {{1,1,1},{1,0,1}, {1,1,1}};

    sol.setZeroes(matrix);

    return 0;
}