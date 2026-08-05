class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int low=0;
         int sum=0;
         int n=nums.size(),mini=INT_MAX;
         for(int high=0;high<n;high++){   
             sum+=nums[high];
            while(sum>=target){
                mini=min(mini,high-low+1);
                sum=sum-nums[low];
                low++;
            }
         }
         if(mini==INT_MAX) return 0;
         return mini;
    }
};