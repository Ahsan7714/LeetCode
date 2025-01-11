class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int rows=matrix.size();
     int cols=matrix[0].size();
     int left=0,right=rows*cols-1;
     while(left<=right){
        int mid = left+(right-left)/2;
        int mid_val=matrix[mid/cols][mid%cols];
        if(mid_val==target){
            return true;
        }else if(mid_val<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
     }
     return false;

    }
};