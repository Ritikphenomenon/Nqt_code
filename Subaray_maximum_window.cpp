/*
    Problem Statement:
    Given an array of integers `arr` of size `n` and an integer `k`, 
    find the maximum element in each sliding window of size `k`.

    Example:
    Input: arr = [1, 3, -1, -3, 5, 3, 6, 7], k = 3
    Output: [3, 3, 5, 5, 6, 7]

    Explanation: 
    1. The first window is [1, 3, -1] => max is 3.
    2. The second window is [3, -1, -3] => max is 3.
    3. The third window is [-1, -3, 5] => max is 5.
    4. The fourth window is [-3, 5, 3] => max is 5.
    5. The fifth window is [5, 3, 6] => max is 6.
    6. The sixth window is [3, 6, 7] => max is 7.

    You need to implement the function `maxOfSubarray` to solve this problem.
*/


#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum of each subarray of size k
vector<int> maxOfSubarray(vector<int> arr, int n, int k) {

    vector<int> ans;
    deque<int> dq;

    for (int i = 0; i < arr.size(); i++) {

        // Remove elements from the front that are out of the current window
        if (!dq.empty() && i - dq.front() == k) {
            dq.pop_front();
        }

        // Remove elements from the back that are smaller than the current element
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // Add the current element index to the deque
        dq.push_back(i);

        // Once the window reaches size k, add the maximum to the result
        if (i >= k - 1) {
            ans.push_back(arr[dq.front()]);
        }
    }

    return ans;
}

// Main function to test the solution
int main() {
    // Input example
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = arr.size();

    // Function call to get the maximum of each subarray
    vector<int> result = maxOfSubarray(arr, n, k);

    // Print the result
    cout << "Maximum of each subarray of size " << k << ":\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
