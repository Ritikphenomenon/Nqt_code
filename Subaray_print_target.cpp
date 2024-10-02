/*
To print all the subarrays whose sum is equal to k
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    void subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        map<int, vector<int>> mp; // Stores indices where each prefix sum occurred
        mp[0].push_back(-1); // To handle subarrays starting from index 0

        for (int j = 0; j < n; j++) {
            sum += nums[j];

            // Check if there exists a prefix sum such that the sum of elements between
            // the current index and that prefix sum equals k
            if (mp.find(sum - k) != mp.end()) {
                for (int startIndex : mp[sum - k]) {
                    // Print the subarray
                    cout << "Subarray: ";
                    for (int idx = startIndex + 1; idx <= j; idx++) {
                        cout << nums[idx] << " ";
                    }
                    cout << endl;
                }
            }

            // Store the current sum and its index
            mp[sum].push_back(j);
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1,1};
    int k = 2;
    sol.subarraySum(nums, k);
    return 0;
}
