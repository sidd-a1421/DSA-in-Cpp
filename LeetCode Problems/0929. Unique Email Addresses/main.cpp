#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        unordered_map<string, int> mpp;

        for(int i = 0; i < n; i++){
            string email = "";
            auto it = find(emails[i].begin(), emails[i].end(), '@');
            for(int j = 0; j < emails[i].size(); j++){
                if(j < (it - emails[i].begin())){
                    if(emails[i][j] == '.') continue;
                    if(emails[i][j] == '+') j = it - emails[i].begin();
                }
                email += emails[i][j];
            }
            mpp[email]++;
        }

        return mpp.size();
    }
};

int main() {

    Solution sol;

    vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};

    int result = sol.numUniqueEmails(emails);

    cout << result << endl;

    return 0;
}