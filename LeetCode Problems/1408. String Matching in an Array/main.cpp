#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        int n = words.size();
        
        sort(words.begin(), words.end(), [](string &a, string &b) {
            return a.size() < b.size();
        });

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }

        return result;
    }
};

int main() {

    Solution sol;

    vector<string> words = {"mass","as","hero","superhero"};

    vector<string> result = sol.stringMatching(words);

    for(auto it : result) cout << it << " ";

    return 0;
}