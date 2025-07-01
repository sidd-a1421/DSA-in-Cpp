#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size(), cnt = 1;
        for(int i = 0; i < n; i++){
            if(i != 0  &&  word[i] == word[i-1]) cnt++;
        }

        return cnt;

    }
};

int main() {

    Solution sol;

    string s = "abbcccc";

    int result = sol.possibleStringCount(s);

    cout << result << endl;

    return 0;
}