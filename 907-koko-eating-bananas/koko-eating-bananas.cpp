class Solution {
public:
    bool canEatAll(const vector<int>& piles, int k, int h) {
        int totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + k - 1) / k; 
            if (totalHours > h) {
                return false; 
            }
        }
        return totalHours <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int result = high; 
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEatAll(piles, mid, h)) {
                result = mid; 
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        }
        
        return result;
    }
};
