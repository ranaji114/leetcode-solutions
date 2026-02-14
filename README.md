# leetcode-solutions
LeetCode solutions and DSA practice problems with detailed explanations

## Solutions

### 645. Set Mismatch
**Difficulty:** Easy | **Status:** ✅ Accepted

**Problem:** 
Find the number that occurs twice and the number that is missing in an array containing numbers from 1 to n.

**Solution Approach:**
- Use a frequency counting array to track occurrences of each number
- Identify the duplicate (appears twice) and missing (appears zero times)

**Complexity Analysis:**
- **Time Complexity:** O(n) - Single pass through the array for counting and identification
- **Space Complexity:** O(n) - Frequency counting array

**Performance:**
- Runtime: 7 ms (Beats 41.52%)
- Memory: 26.26 MB (Beats 50.83%)
- Test Cases: 49/49 Passed ✅

**Key Insights:**
1. Direct array indexing can be used since numbers are in range [1, n]
2. The frequency array approach is straightforward and efficient
3. Alternative: Use mathematical approach (sum and product) for O(1) space

