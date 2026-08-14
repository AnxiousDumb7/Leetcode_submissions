class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxlen = 0;
        int left = 0;
        unordered_map<int, int> mp;

        for(int r = 0; r < s.length(); r++){
            mp[s[r]]++;
            while(mp[s[r]] > 2){
                mp[s[left]]--; // Jo reduce hoga usiki value/freq kam hogi
                left++;
            }
            maxlen = max(maxlen, r - left +1);
        }
        return maxlen;
    }
};