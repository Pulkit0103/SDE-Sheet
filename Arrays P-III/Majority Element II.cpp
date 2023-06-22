class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0, majority1 = INT_MIN , majority2 = INT_MIN , k =nums.size()/3;
        for(auto it : nums){
            if(count1 == 0 && majority2 != it){
                count1 = 1;
                majority1 = it;
            }
            else if(majority1 == it){
                count1++;
            }
            else if(count2 == 0  && majority1 != it){
                count2 = 1;
                majority2 = it;
            }
            else if(majority2 == it ){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        } 
        vector<int> ans;
        count1 = 0; count2 = 0;
        for(auto it : nums){
            if(it == majority1) count1++;
            if(it == majority2) count2++;
        }
        if(count1 >= k + 1) ans.push_back(majority1);
        if(count2 >= k + 1) ans.push_back(majority2);
        return ans;
    }
};


// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int k = n / 3;
//         vector<int> ans;
//         unordered_map<int,int> mp;
//         if(n == 1 || n == 2 ){
//             nums.erase(unique(nums.begin() , nums.end()) , nums.end());
//             return nums;
//         } 
//         for(int i = 0; i < n ; i++){
//             if(mp.find(nums[i]) == mp.end()){
//                 mp[nums[i]] = 1;
//             }
//             else{
//                 mp[nums[i]]++;
//                 if(mp[nums[i]] > k){
//                     ans.push_back(nums[i]);
//                     mp[nums[i]] = -n;
//                 }
//             }
//         }
//         // ans.erase(unique(ans.begin() , ans.end()) , ans.end());
//         return ans;
//     }
// };