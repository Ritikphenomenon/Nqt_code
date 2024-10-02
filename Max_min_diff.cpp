/*
Given an array of integers, write a program to find the maximum difference between two elements such that the smaller element appears before the larger element in the array.
*/

#include <iostream>
#include <climits>
using namespace std;

int maxDifference(int arr[], int n) {
    // Initialize the minimum element as the first element of the array
    int mini = arr[0];  
    // Initialize the maximum difference to the smallest possible value
    int ans = INT_MIN;

    // Traverse the array from the second element to the last element
    for (int i = 1; i < n; i++) {
        // Update the maximum difference found so far
        ans = max(ans, arr[i] - mini);
        // Update the minimum value encountered so far
        mini = min(mini, arr[i]);
    }

    return ans;
}

int main() {
    // Example input array
    int arr[] = {3, 5, 1, 7, 4, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function and store the result
    int result = maxDifference(arr, n);

    // Output the result
    if (result == INT_MIN) {
        cout << "No valid pair found" << endl;
    } else {
        cout << "Maximum difference: " << result << endl;
    }

    return 0;
}
