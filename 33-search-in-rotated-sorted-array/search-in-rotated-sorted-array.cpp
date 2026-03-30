class Solution {
public:
    int search(vector<int>& nums, int target) {
       int index = min_element(nums.begin(), nums.end()) - nums.begin();//min index
       int low1=0,high1=index-1;
       while(low1<=high1){
        int mid=(low1+high1)/2;
          if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            high1=mid-1;
        }
        else{
            low1=mid+1;
        }
       }
       int low2=index,high2=nums.size()-1;
       while(low2<=high2){
        int mid=(low2+high2)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
              high2=mid-1;
        }
        else{
             low2=mid+1;
        }
       }
    return -1;
    }
};