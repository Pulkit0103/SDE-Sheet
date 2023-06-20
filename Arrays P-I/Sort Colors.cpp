class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0; 
        int j = nums.size() - 1;
        for(int k=0; k <= j ; k++){
            if( nums[k] == 2){
                swap(nums[k] , nums[j]);
                if (nums[k] == nums[j]) k--; 
                j--;
            }
        }
        for(int k=0; k < j + 1 ; k++){
            if( nums[k] == 0){
                swap(nums[k] , nums[i]);
                i++;
            }
        }
    }
};