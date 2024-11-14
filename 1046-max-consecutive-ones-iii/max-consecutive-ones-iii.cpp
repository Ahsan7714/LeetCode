class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int count=0;
        int maxL=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0) count++;
            while(count>k){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            maxL=max(maxL,right-left+1);
        }
        return maxL;
        
    }
};