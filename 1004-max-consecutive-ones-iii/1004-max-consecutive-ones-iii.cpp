class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int zero_flipped = 0;
        int left = 0;
        int max_count = 0;
        
        //first valid k window
        for(int right = 0; right < n; right++){
            if(nums[right] == 0){
                zero_flipped++;
            }

            while(zero_flipped > k){
                //reduce window
                if(nums[left] == 0){
                    zero_flipped--;
                }
                left++;    
            }
            max_count = max(max_count, right - left + 1);
        }
        return max_count;
    }
};