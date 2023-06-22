
//        ---> Binary Search Approach

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0 , high = n*m - 1 , mid;
        while (low <= high){
            mid = low + (high - low)/2;
            int row = mid / m;
            int col = mid % m;
            if(target == matrix[row][col]) return true;
            else if(target > matrix[row][col]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int i = 0 , j = 0;
//         while (i < n && j < m){
//             if(target > matrix[i][m-1]){
//                 i++;
//             }
//             else{
//                 for(int k = 0; k < m ; k++){
//                     if( target == matrix[i][k]){
//                         return true;
//                     }
//                 }
//                 return false;
//             }
//         }

//         return false;
//     }
// };