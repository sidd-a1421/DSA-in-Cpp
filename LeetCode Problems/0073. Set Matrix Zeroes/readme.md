# Set Matrix Zeroes (LeetCode #73)

🔗 [Problem Link](https://leetcode.com/problems/set-matrix-zeroes/)

## 🧠 Problem Statement

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

### Example

Example 1:

![Example 1](./screenshots/mat1.jpg)

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:

![Example 2](./screenshots/mat2.jpg)

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

### Constraints:

m == matrix.length

n == matrix[0].length

1 <= m, n <= 200

-2^31 <= matrix[i][j] <= 2^31 - 1