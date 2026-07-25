class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        int avg = 0;
        // initial window
        for (int i = 0; i <= k - 1; i++) {
            sum += arr[i];
        }
        int f_avg = sum / k; // average
        if (f_avg >= threshold) {
            count++;
        }

        // shift window from k to n-1
        for (int right = k; right < n; right++) {
            sum += arr[right] - arr[right - k];

            int avg = sum / k; // average
            if (avg >= threshold) {
                count++;
            }
        }
        return count;
    }
};