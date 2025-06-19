#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long rev = 0;
        int true_value = x;
        while(x != 0){
            rev = (rev * 10) + (x % 10);
            x /= 10;
        }
        return ((rev == true_value) ? true : false);
    }
};

int main() {

    Solution sol;

    int x = 121;    

    bool result = sol.isPalindrome(x);

    cout << result << endl;

    return 0;
}