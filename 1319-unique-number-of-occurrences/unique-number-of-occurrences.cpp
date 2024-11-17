class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mapp;
        for(int n:arr){
            mapp[n]++;
        }
        vector<int>ls;
        for(const auto&pair:mapp){
            ls.push_back(pair.second);
        }
        sort(ls.begin(),ls.end());
        for(int i=1;i<ls.size();i++){
            if(ls[i]==ls[i-1]){
                return false;
            }
        }
            return true;
    }
};