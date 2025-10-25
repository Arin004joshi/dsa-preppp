class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {
        int maxSoFar = arr[0];   // overall max sum
        int currentSum = arr[0]; // current subarray sum
        
        for (int i = 1; i < arr.size(); i++) {
            // Either extend the current subarray or start a new one from arr[i]
            currentSum = max(arr[i], currentSum + arr[i]);
            
            // Update global maximum
            maxSoFar = max(maxSoFar, currentSum);
        }
        
        return maxSoFar;
    }
};
