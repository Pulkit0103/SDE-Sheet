class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> PT(numRows);
        for(int i = 0; i < numRows; i++){
            PT[i] = vector<int> (i+1 , 1);
            for(int j = 1; j < i; j++ ){
                PT[i][j] = PT[i-1][j-1] + PT[i-1][j];
            }
        }
        return PT;
    }
};