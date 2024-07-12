class Solution {
public:
    int scoreOfString(string s) {
        int count =0;
        for(int i=0; i<s.size()-1;i++){
            count = count+ abs(s[i]-s[i+1]);
        }
        return count;
    }
};