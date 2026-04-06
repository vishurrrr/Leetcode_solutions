class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int num=1;
        int i=0;
        int n=nums.size();
        while(i<n && k>0){
            if(nums[i]==num){
                i++;
            }
            else{
                
                k--;
            }
            num++;
        }
        while(k>0){
            num++;
            k--;
        }
     return num-1;
    }
};