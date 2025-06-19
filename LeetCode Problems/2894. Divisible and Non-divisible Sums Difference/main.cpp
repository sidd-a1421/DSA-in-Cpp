#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int i,num1=0,num2=0;
        for(i=1;i<=n;i++){
            if(i%m){
                num1+=i;
            }
            else{
                num2+=i;
            }
        }
        return num1-num2;
    }
};

int main() {

    Solution sol;
    
    int n = 10, m = 3;

    int result = sol.differenceOfSums(n, m);

    cout << result << endl;

    return 0;
}