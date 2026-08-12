class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int max_count = 0;
        int left = 0;
        unordered_map<int, int> mp;

        for(int right = 0; right < nums.size(); right++){
            mp[nums[right]]++;
            
            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
            }
            max_count = max(max_count, right - left + 1);
        }
        return max_count;
    }
};