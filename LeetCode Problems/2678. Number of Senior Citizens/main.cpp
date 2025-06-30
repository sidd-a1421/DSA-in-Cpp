#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size(), cnt = 0, age;
        for(int i = 0; i < n; i++){
            age = details[i][11] - '0';
            if(age > 6) cnt++;
            if(age == 6){
                age = details[i][12] - '0';
                if(age > 0) cnt++;
            }
        }
        return cnt;
    }
};

int main() {

    Solution sol;

    vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};

    int result = sol.countSeniors(details);

    cout << result << endl;

    return 0;
}