class Solution {
public:
    int maxRow(vector<vector<int>>& mat,int col){
        int row=0;
        for(int i=1;i<mat.size();i++){
            if(mat[i][col]>mat[row][col]){
                row=i;
            }
        }
        return row;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       int m=mat.size();
       int n=mat[0].size();
       int low=0;
       int high=n-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        int row=maxRow(mat,mid);
        int left;
        if(mid==0){
            left=-1;
        }
        else{
            left=mat[row][mid-1];
        }
        int right;
        if(mid==n-1){
           right=-1;
        }
        else{
            right=mat[row][mid+1];
        }
        if(mat[row][mid]>left && mat[row][mid]>right){
            return {row,mid};
        }
        else if(mat[row][mid]<left){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return {-1,-1};
    }
};