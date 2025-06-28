#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int i = 0, j = 0;

        while(i < n1  &&  j < n2){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else i++;
            if(i == n1) return n2 - j;
        }

        return 0;
    }
};

int main() {

    Solution sol;

    string s = "coaching";
    string t = "coding";

    int result  = sol.appendCharacters(s, t);

    cout << result << endl;

    return 0;
}