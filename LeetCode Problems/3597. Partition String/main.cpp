#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_map<string, int> mpp;
        vector<string> ans;
        int n = s.size(), index = 0;
        string str = "";
        for(int i = 0; i < n; i++){
            str += s[index];
            if(!mpp.count(str)){
                ans.push_back(str);
                mpp[str]++;
                str = "";
                index++;
            }
            else{
                index++;
            }
        }

        return ans;
    }
};

int main() {

    Solution sol;

    string s = "abbccccd";

    vector<string> result = sol.partitionString(s);

    for(auto it : result) cout << it << ", ";

    return 0;
}