// -------> Approach 3   BAD APPROACH IF MULTIPLE SAME NUMBERS
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         // vector<int> ans(n);
//         long long inisum = 0;
//         for(int i = 0; i < n ; i++){
//             inisum += nums[i];
//         }
//         n -= 1;
//         long long sum = n*(n+1);
//         sum /= 2;
//         return abs(sum - inisum);
//     }
// };

//  -----> Approach 2   (Binary Search)


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {

//         auto cnt = [&](int cur){
//             int count = 0;
//             for (auto it : nums){
//                 if(it <= cur) count++;
//             }
//             return count;
//         };
//         int low = 1;
//         int high = nums.size() ;
//         int dup = -1;
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             int count1 = cnt(mid);
//             if(count1 > mid){
//                 dup = mid;
//                 high = mid - 1;
//             }
//             else{
//                 low = mid + 1;
//             }
//         }
//         return dup;
//     }
// };

// ------ > Approach 1  (Kinda Hashing)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         while(nums[0]  != nums[nums[0]]){
//             swap(nums[0] , nums[nums[0]]);
//         }
//         return nums[0];
//     }
// };