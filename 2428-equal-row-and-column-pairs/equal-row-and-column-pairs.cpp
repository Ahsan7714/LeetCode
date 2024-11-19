class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size();
        map<vector<int>, int> rowFreq;
        
        for(int i=0;i<n;i++){
            vector<int> row = grid[i];
            rowFreq[row]++;            
        }
        
        for(int c=0;c<n;c++){
            vector<int> col;
            for(int r=0;r<n;r++){
                col.push_back(grid[r][c]);
            }
            
            if(rowFreq.find(col) != rowFreq.end()) ans += rowFreq[col];
        }        
                
        return ans;
    }
};