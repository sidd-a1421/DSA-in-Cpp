#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x != 0){
            ans = (ans * 10) + (x % 10);
            x /= 10;
        }
        return (((ans > INT_MAX) || (ans < INT_MIN)) ? 0 : ans);
    }
};

int main() {

    Solution sol;

    int x = 123;

    int result = sol.reverse(x);

    cout << result << endl;

    return 0;
}