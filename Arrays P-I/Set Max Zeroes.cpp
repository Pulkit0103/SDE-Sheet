class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row;
        vector<int> col;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        row.erase(unique(row.begin() , row.end()) , row.end());
        col.erase(unique(col.begin() , col.end()) , col.end());

        for(auto it : row){
            for(int i=0; i<m; i++){
                matrix[it][i] = 0;
            }
        }
        for(auto it : col){
            for(int i=0; i<n; i++){
                matrix[i][it] = 0;
            }
        }
    }
};