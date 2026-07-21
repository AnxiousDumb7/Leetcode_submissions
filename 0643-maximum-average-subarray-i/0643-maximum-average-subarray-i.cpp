class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int window_sum = 0;
        

        // create initial window
        for(int i = 0; i <= k - 1; i++){
            window_sum += nums[i];
        }
        
        int max_sum = window_sum;
        
        //update window by adding and subtracting values
        for(int i = k; i < n; i++){
            window_sum += nums[i] - nums[i-k];
            //window_sum -= nums[i-k];
            max_sum = max(max_sum, window_sum);
        }
        
        return (double)max_sum / k;
    }
};