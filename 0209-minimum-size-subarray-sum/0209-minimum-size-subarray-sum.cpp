class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int current_sum = 0, min_length = n + 1;
        int left = 0;

        for(int right = 0; right < n; right++){
            current_sum += nums[right];
             
            while(current_sum >= target){
                min_length = min(min_length, right - left + 1);
                current_sum = current_sum - nums[left];
                left++;
            }  
        }
        if(min_length == n + 1)
            return 0;
        return min_length;
    }
};