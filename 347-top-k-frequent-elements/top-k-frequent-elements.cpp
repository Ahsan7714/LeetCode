class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>fMap;
        for(int n:nums){
            fMap[n]++;
        }
        int n=nums.size();
        vector<vector<int>>bucket(n+1);
        for(auto x:fMap){
            bucket[x.second].push_back(x.first);
        }
        vector<int>result;
        for(int i=n; i>=0 ;--i){
            if(!bucket[i].empty()){
                for(int num:bucket[i]){
                    result.push_back(num);
                }
                if(result.size()==k) break;
            }
        }
        return result;
    }
};