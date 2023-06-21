class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin() , intervals.end());
        int n = intervals.size();

        vector<vector<int>> mergedintervals;

        for(auto it : intervals){
            if (mergedintervals.empty() || mergedintervals.back()[1] < it[0]){
                mergedintervals.push_back(it);
            }
            else{
                mergedintervals.back()[1] = max(mergedintervals.back()[1] , it[1]);
            }
        }

        return mergedintervals;
    }
};

// -----------> Easy but not a Good Approach
// -----------  Based on Brute Force Kinda

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
//         sort(intervals.begin() , intervals.end());
//         int n = intervals.size();
//         int start , end;

//         start = intervals[0][0];
//         end = intervals[0][1];

//         vector<vector<int>> mergedintervals;

//         if (n == 1){
//             return intervals;
//         }

//         for(int i = 1; i < n; i++){
//             if (i == n-1){
//                 if (intervals[i][0] > end){
//                     vector<int> v;
//                     v.push_back(start);
//                     v.push_back(end);
//                     mergedintervals.push_back(v);
//                     start = intervals[i][0];
//                     end = intervals[i][1];
//                     vector<int> a;
//                     a.push_back(start);
//                     a.push_back(end);
//                     mergedintervals.push_back(a);
//                 }
//                 else{
//                     end = max(intervals[i][1] , end);
//                     vector<int> v;
//                     v.push_back(start);
//                     v.push_back(end);
//                     mergedintervals.push_back(v);
//                     // start = intervals[i][0];
//                 }
//             }
//             else if (intervals[i][0] > end){
//                 vector<int> v;
//                 v.push_back(start);
//                 v.push_back(end);
//                 mergedintervals.push_back(v);
//                 start = intervals[i][0];
//                 end = max(intervals[i][1] , end);
//             }
//             else{
//                 end = max(intervals[i][1] , end);
//             }
//         }

//         return mergedintervals;
//     }
// };