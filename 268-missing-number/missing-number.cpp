class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num){
                num++;
            } else{
                break;
            }
        }
        return num;
    }
};