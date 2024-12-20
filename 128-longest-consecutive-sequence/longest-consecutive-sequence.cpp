class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end()); 
        int maxLength = 0;

        for (int num : numSet) {
            // Only start counting if num-1 is not in the set
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Keep looking for the next consecutive number
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                maxLength = max(maxLength, currentStreak);
            }
        }

        return maxLength;
    }
};