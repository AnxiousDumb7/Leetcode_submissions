class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int max_len = 0;

    unordered_map<char, bool> mp;
    int left, right = 0;

        for (right; right < n; right++){
            //till right(current) character is in the mp
            while(mp[s[right]]){
                //remove left 
                mp.erase(s[left]);
                //update left   
                left++;
            }
            // add current character
            mp[s[right]] = true;
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};