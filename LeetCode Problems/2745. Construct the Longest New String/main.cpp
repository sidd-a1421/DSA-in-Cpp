#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestString(int x, int y, int z) {
        int sum = 0;

        if(x == y){
            sum = z + 2*x;
            return 2*sum;
        }

        sum = z + 1 + (2 * min(x, y));

        return 2*sum;
    }
};

int main() {

    Solution sol;

    int x = 2, y = 5, z = 1;

    int result = sol.longestString(x, y, z);

    cout << result << endl;

    return 0;
}