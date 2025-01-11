class Solution {
public:
    bool canEatAll(const vector<int>& piles, int k, int h) {
        int totalHours = 0;
        for (int pile : piles) {
            // Calculate hours needed to finish this pile at speed k
            totalHours += (pile + k - 1) / k; // This is equivalent to ceil(pile / k)
            if (totalHours > h) {
                return false; // If we exceed h hours, return false early
            }
        }
        return totalHours <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int result = high; // Initialize result with the maximum possible value
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEatAll(piles, mid, h)) {
                result = mid; // mid is a valid speed, try to minimize it
                high = mid - 1; // Search in the lower half
            } else {
                low = mid + 1; // Search in the upper half
            }
        }
        
        return result;
    }
};
