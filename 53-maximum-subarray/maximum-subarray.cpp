class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int bestend=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int x=bestend + nums[i];
            int y=nums[i];
            bestend=max(x,y);
            ans=max(bestend,ans);
        }
        return ans;
    }
};