class Solution {
public:
     bool canReduce(long long T, int H, vector<int>& w) {
        long long total = 0;

        for (int t : w) {
            long long l = 0, r = H;

            while (l <= r) {
                long long mid = (l + r) / 2;

                long long timeNeeded = (long long)t * mid * (mid + 1) / 2;

                if (timeNeeded <= T) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            total += r;

            if (total >= H) return true;
        }

        return false;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {

        long long low = 1;

        long long fastest = *min_element(workerTimes.begin(), workerTimes.end());

        long long high = fastest * (long long)mountainHeight * (mountainHeight + 1) / 2;

        long long ans = high;

        while (low <= high) {

            long long mid = (low + high) / 2;

            if (canReduce(mid, mountainHeight, workerTimes)) {
                ans = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};