#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mpp;
        unordered_map<char, int> mpp1, mpp2;

        for(auto it : s) mpp1[it]++;
        for(auto it : t) mpp2[it]++;

        if(mpp1.size() != mpp2.size()) return false;

        for(int i = 0; i < s.size(); i++){
            if(!mpp.count(s[i])){
                mpp[s[i]] = t[i];
                s[i] = t[i];
            }
            else{
                if(mpp[s[i]] == t[i]) s[i] = t[i];
                else s[i] = mpp[s[i]];
            }
        }

        return s == t;        
        
    }
};

int main() {

    Solution sol;

    string s = "egg";
    string t = "odd";

    bool result = sol.isIsomorphic(s, t);

    cout << result << endl;

    return 0;
}