class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int>sMap,tMap;
        for(char  n:s){
            sMap[n]++;
        }
        for(char n:t){
            tMap[n]++;
        }
        return sMap==tMap;
    }
};