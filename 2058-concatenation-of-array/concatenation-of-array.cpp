class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        for(int i =0 ;i<2;i++){
            for(int j=0;j<nums.size();j++){
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};