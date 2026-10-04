class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> T(rowIndex + 1, vector<int>(rowIndex + 1, 0));
        vector<int> result;
       
        for(int i=0;i<rowIndex+1;i++){
         T[i][i]=1;
        T[i][0]=1;
        for(int j=1;j<i;j++){
            T[i][j]=T[i-1][j]+T[i-1][j-1];
        }
        }
       
             for(int j=0;j<rowIndex+1;j++){
                result.push_back(T[rowIndex][j]);
             }
         return result;
        }
   

    };
