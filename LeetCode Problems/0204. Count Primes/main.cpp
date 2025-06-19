#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1, true);
        if(n <= 2) return 0;

        prime[0] = prime[1] = false;
        int count = 1;

        for(int i = 3; i < n; i += 2){
            if(prime[i] == 1){
                count++;
                for(int j = 2*i; j < n; j += i){
                    prime[j] = false;
                }
            }
        }
        
        return count;
    }
};

int main() {

    Solution sol;

    int n = 10;

    int result = sol.countPrimes(n);

    cout << result << endl;

    return 0;
}