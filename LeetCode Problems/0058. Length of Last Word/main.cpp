#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1, length = 0;
        for(i; i >= 0; i--){
            if(s[i] != ' '){
                length++;
            }
            if(length > 0  &&  s[i] == ' ') break;
        }

        return length;
    }
};

int main() {

    Solution sol;

    string s = "Hello World";

    int result = sol.lengthOfLastWord(s);

    cout << result << endl;

    return 0;
}