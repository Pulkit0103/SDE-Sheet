class Solution {
public:
    int uniquePaths(int m, int n) {
        long ans = 1;
        for(int i = m+n-2, j = 1; i >= max(m, n); i--, j++) 
            ans = (ans * i) / j;
        return ans;
    }
};


// class Solution {
// public:
//     int countpaths(int i , int j , int m , int n , vector<vector<int>> &dp){
//         if ( i >= m || j >= n) return 0;
//         if ( i == m-1 && j == n-1) return 1;
//         if(dp[i][j] != -1) return dp[i][j];
//         int down = countpaths( i+1 , j , m , n , dp);
//         int right = countpaths( i , j+1 , m , n , dp);
//         return dp[i][j] = down + right;
//     }


//     int uniquePaths(int m, int n) {
//         // vector<int> pre(n, 1), cur(n, 1);
//         // for (int i = 1; i < m; i++) {
//         //     for (int j = 1; j < n; j++) {
//         //         cur[j] = pre[j] + cur[j - 1];
//         //     }
//         //     swap(pre, cur);
//         // }
//         // return pre[n - 1];

//         // vector<vector<int>> dp( m , vector<int> (n , 1));
//         // for(int i = 1; i < m ; i++){
//         //     for(int j = 1; j < n; j++){
//         //         dp[i][j] = dp[i-1][j] + dp[i][j-1];
//         //     }
//         // }
//         // return dp[m-1][n-1];

//         vector<vector<int>> dp( m , vector<int> (n , -1));

//         return countpaths(0 , 0 , m , n , dp);
//     }
// };