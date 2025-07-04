#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0], maxi = 0;
        for(int i = 1; i < n; i++){
            maxi = max(maxi, prices[i] - mini);
            mini = min(mini, prices[i]);
        }
        return maxi;
    }
};


int main() {

    Solution sol;

    vector<int> prices = {7,1,5,3,6,4};

    int result = sol.maxProfit(prices);

    cout << result << endl;

    return 0;
}