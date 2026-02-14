// LeetCode 645: Set Mismatch
// Problem: Find the duplicate number and the missing number
// Time Complexity: O(n), Space Complexity: O(n)

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1, 0);
        
        // Count occurrences of each number
        for (int num : nums) {
            count[num]++;
        }
        
        int duplicate = 0;
        int missing = 0;
        
        // Find the duplicate (appears twice) and missing (appears 0 times)
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                duplicate = i;
            } else if (count[i] == 0) {
                missing = i;
            }
        }
        
        return {duplicate, missing};
    }
};
