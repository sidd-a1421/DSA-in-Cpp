#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;
        int j = 0, maxi = 0;

        for(int i = 0; i < n; i++){

            mpp[s[i]]++;

            while(mpp[s[i]] > 1){
                mpp[s[j]]--;
                j++;
            }
            maxi = max(maxi, i - j + 1);

        }

        return maxi;
    }
};

int main() {

    Solution sol;

    string s = "abcabcbb";

    int result = sol.lengthOfLongestSubstring(s);

    cout << result << endl;

    return 0;
}