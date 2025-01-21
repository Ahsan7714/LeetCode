class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;
        bool found = false;

        for (int k = l; k <= r; ++k) {
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += nums[i];
                if (i >= k - 1) {
                    if (sum > 0) {
                        minSum = min(minSum, sum);
                        found = true;
                    }
                    sum -= nums[i - k + 1];
                }
            }
        }

        return found ? minSum : -1;
    }
};