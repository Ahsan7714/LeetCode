class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vo = {'a', 'e', 'i', 'o', 'u'};
        int count=0;
        for(int i=0;i<k;i++){
            if(vo.count(s[i])){
                count++;
            }
        }
        int maxi=count;
        for(int i=k;i<s.size();i++){
            if(vo.count(s[i-k])){
                count--;
            }
            if(vo.count(s[i])){
                count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
