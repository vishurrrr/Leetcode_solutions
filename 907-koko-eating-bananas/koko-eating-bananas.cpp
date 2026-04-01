class Solution {
public:
    long long fxn(vector<int>& piles,int k){
        long long  hour=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            hour=hour+(piles[i]/k);
            if(piles[i]%k!=0){
                hour=hour+1;
            }
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int res=-1;
        while(low<=high){
            int guess = (low + high) / 2;
           long long hour=fxn(piles,guess);
           if(hour>h){
            low=guess+1;
           }
           else{
            res=guess;
            high=guess-1;
           }
        }
        return res;
    }
};