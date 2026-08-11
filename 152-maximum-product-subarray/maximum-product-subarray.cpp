class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxend=nums[0];
        int minend=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            int y=maxend * nums[i];
            int z =minend *nums[i];
            maxend=max(x,max(y,z));
             minend=min(x,min(y,z));
             ans=max(ans,max(maxend,minend));
        }
        return ans;

    }
};