class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin(),nums.end());
        int maxL=0;
        for(int num:numSet){
            if(numSet.find(num-1)==numSet.end()){
                int currentN = num;
                int currentStreak =1;
                while(numSet.find(currentN+1)!=numSet.end()){
                    currentN += 1;
                    currentStreak +=1;
                }
                    maxL = max(maxL,currentStreak);
            }
        }
        return maxL;
    }
};