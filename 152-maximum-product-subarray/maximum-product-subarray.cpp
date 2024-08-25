class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int result = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            int current = nums[i];
            if (current < 0) {
                // Swap max_so_far and min_so_far when current is negative
                swap(max_so_far, min_so_far);
            }
            
            max_so_far = max(current, max_so_far * current);
            min_so_far = min(current, min_so_far * current);
            
            result = max(result, max_so_far);
        }
        
        return result;
    }
};
