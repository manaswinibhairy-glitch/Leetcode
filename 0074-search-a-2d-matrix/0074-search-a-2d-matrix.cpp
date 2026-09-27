class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
            int rows=matrix.size();
            int cols=matrix[0].size();
            int low=0;
            int high=cols*rows-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                int value=matrix[mid/cols][mid%cols];
                if(value==target){
                    return true;
                }
                else if(value>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        
        return false;
    }
};