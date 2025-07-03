#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        string str = "ab";
        int n = str.size(); 
        while(n <= k){
            int l = 0, r = n-1;
            while(l <= r){
                int ch = str[l] + 1;
                str += (char)ch;
                if(str.size() == k) break;
                l++;
            }
            n = str.size();
        }

        return str[k-1];
    }
};

int main() {

    Solution sol;

    int k = 5;

    char result = sol.kthCharacter(k);

    cout << result << endl;

    return 0;
}