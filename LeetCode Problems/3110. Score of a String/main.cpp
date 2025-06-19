#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int i, sum=0;
        for(i=1; i < s.size(); i++){
            sum += abs(s[i]-s[i-1]);
        }
        return sum;
    }
};

int main() {

    Solution sol;

    string s = "hello";
    
    int result = sol.scoreOfString(s);

    cout << result << endl;
    
    return 0;
}