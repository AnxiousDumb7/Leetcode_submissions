// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int n = s.size();
//         int count = 0;
//
//         vector<int> window;
//         for(int i = 0; i < k; i++){
//             window.push_back(s[i]);
//             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
//             s[i] == 'u'){
//                 count++;
//             }
//         }
//         int max_count = count;
//
//         for(int right = k; right < n; right++){
//             window.push_back(s[right]);
//
//             if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
//             s[right] == 'o' || s[right] == 'u'){
//                 count++;
//             }
//
//             if(*window.begin() == 'a' || *window.begin() == 'e' ||
//             *window.begin() == 'i' || *window.begin() == 'o' ||
//             *window.begin() == 'u'){
//                 count--;
//             }
//             window.erase(window.begin());
//             max_count = max(max_count, count);
//         }
//         return max_count;
//     }
// };

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        int max_count = 0;
        int left = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count++;
            }
            if (i - left + 1 == k) {
                max_count = max(max_count, count);
                if (s[i - k + 1] == 'a' || s[i - k + 1] == 'e' ||
                    s[i - k + 1] == 'i' || s[i - k + 1] == 'o' ||
                    s[i - k + 1] == 'u') {
                    count--;
                }
                left++;
            }
        }
        return max_count;
    }
};