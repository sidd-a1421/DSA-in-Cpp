#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n < 3) return false;

        int vowelCnt = 0, consoCnt = 0;
        for(int i = 0; i < n; i++){
            if(!isalnum(word[i])) return false;
            char ch = tolower(word[i]);
            if((ch >= 'a' && ch <= 'z')){
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowelCnt++;
                else consoCnt++;
            }
            
        }
        return (vowelCnt >= 1 && consoCnt >= 1);
    }
};

int main() {

    Solution sol;

    string word = "234Adas";

    bool result = sol.isValid(word);

    cout << result << endl;

    return 0;
}