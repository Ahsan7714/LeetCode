class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int total=0;
        for(int n : nums){
            total+=n;
        }
        for(int i=0;i<nums.size();i++){
            int rightSum=total-nums[i]-leftSum;
            if(leftSum==rightSum){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
};