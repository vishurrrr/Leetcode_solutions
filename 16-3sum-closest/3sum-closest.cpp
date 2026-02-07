class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = nums[0] + nums[1] + nums[2];
        int bestDiff = target - ans;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = target - sum;

                // ✅ closest check using diff
                if (abs(diff) < abs(bestDiff)) {
                    bestDiff = diff;
                    ans = sum;
                }

                if (diff == 0) {
                    return sum; // exact match
                } else if (diff > 0) {
                    j++;   // sum too small
                } else {
                    k--;   // sum too large
                }
            }
        }
        return ans;
    }
};
