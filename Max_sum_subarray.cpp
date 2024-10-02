/*
Given a array,calculate the maximum sum subarrays
*/
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int mini = 0, maxj = 0;
    int maxi = INT_MIN;
    int sum = 0;
    int k1 = 0, k2 = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        
        if (sum >= maxi) {
            maxi = sum;
            maxj = i;
            k1 = mini;
            k2 = maxj;
        }
        
        if (sum < 0) {
            sum = 0;
            mini = i + 1;
        }
    }

    // You can print the subarray indices if you want:
    cout << "Maximum subarray sum is between indices " << k1 << " and " << k2 << endl;

    return maxi;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example input
    int maxSum = maxSubarraySum(arr);
    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
