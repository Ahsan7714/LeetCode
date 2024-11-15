class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt=0;
        int cuurentAlt=0;
        for(int i=0 ;i<=gain.size()-1 ;i++){
            cuurentAlt +=gain[i];
             maxAlt = max(maxAlt, cuurentAlt);
        }
        return maxAlt;

    }
};