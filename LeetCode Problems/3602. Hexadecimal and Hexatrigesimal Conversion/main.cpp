#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string concatHex36(int n) {
        int hex_deci = n*n, hex_trigesi = n*n*n;
        int rem;
        string str = "", temp = "";
        while(hex_deci > 0){
            rem = 0;
            char ch;
            rem = hex_deci % 16;
            if(rem < 10){
                ch = rem + 48;
            }
            else {
                ch = rem + 55;
            }

            str += ch;
            hex_deci /= 16;
        }
        reverse(str.begin(), str.end());

        while(hex_trigesi > 0){
            rem = 0;
            char ch;
            rem = hex_trigesi % 36;
            if(rem < 10){
                ch = rem + 48;
            }
            else {
                ch = rem + 55;
            }

            temp += ch;
            hex_trigesi /= 36;
        }

        reverse(temp.begin(), temp.end());
        str += temp;
        
        return str;
    }
};

int main() {

    Solution sol;

    int n = 13;

    string result = sol.concatHex36(n);

    cout << result << endl;

    return 0;
}