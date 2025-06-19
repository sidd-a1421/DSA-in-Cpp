#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxNo = INT_MIN, n;

        if(arr.size()!=1){
            n = arr[arr.size()-1];
            for(int i = arr.size()-1; i >= 1; i--){
                maxNo = max(maxNo, n);
                n = arr[i-1];
                arr[i-1] = maxNo;
            }
        }

        arr[arr.size()-1] = -1;
        
        return arr;
    }
};

int main() {

    Solution sol;

    vector<int> arr = {17,18,5,4,6,1};

    vector<int> result = sol.replaceElements(arr);

    for(auto it : result) cout << it << " ";

    return 0;
}