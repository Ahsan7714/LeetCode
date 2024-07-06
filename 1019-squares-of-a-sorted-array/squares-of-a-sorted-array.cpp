class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>square;
        for(int i=0;i<nums.size();i++){
            square.push_back((nums[i]*nums[i]));
        }
        sort(square.begin(),square.end());
        return square;
        
    }
};