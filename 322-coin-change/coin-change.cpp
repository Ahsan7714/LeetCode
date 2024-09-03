class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // Check edge case
        if (amount < 1)
            return 0;

        // Create DP array
        vector<int> minCoinsDP(amount + 1, INT_MAX);
        minCoinsDP[0] = 0; // Base case: 0 coins needed to make amount 0

        for (int i = 1; i <= amount; i++) {
            // Try each coin
            for (int coin : coins) {
                if (coin <= i && minCoinsDP[i - coin] != INT_MAX)
                    minCoinsDP[i] =
                        min(minCoinsDP[i], 1 + minCoinsDP[i - coin]);
            }
        }

        return minCoinsDP[amount] == INT_MAX ? -1 : minCoinsDP[amount];
    }
};