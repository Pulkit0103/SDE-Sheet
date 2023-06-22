// Same as More done with Bits Manipulation

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int n = nums.size();
        for(unsigned int i = 0, mask = 1 ; i < 32 ; i++ , mask <<= 1){
            int bits = 0;
            for(auto num : nums){
                if (num & mask) bits++;
            }
            if(bits > n/2){
                majority |= mask;
            }
        }
        return majority;
    }
};

// // ------> Moore Voting Algo


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int counter = 0 , majority;
//         for(auto it : nums){
//             if(!counter){
//                 majority = it;
//             }
//             counter += ((it == majority) ? 1 : -1);
//         }
//         return majority;
//     }
// };