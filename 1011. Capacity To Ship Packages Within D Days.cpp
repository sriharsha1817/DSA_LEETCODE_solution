class Solution {
public:
    int possible(vector<int>& w, int m, int n) {

        int sum = 0;
        int cnt = 1;

        for(int i = 0; i < n; i++) {

            if(sum + w[i] <= m) {
                sum += w[i];
            }
            else {
                cnt++;
                sum = w[i];
            }
        }

        return cnt;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);

        int mini = 0;
        int n = weights.size();

        while(l <= h) {

            int mid = l + (h - l) / 2;

            int cnt = possible(weights, mid, n);

            if(cnt <= days) {
                mini = mid;
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return mini;
    }
};